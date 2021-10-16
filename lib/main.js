'use babel'

import {CompositeDisposable} from 'atom'

let subscriptions;

export function activate() {
    subscriptions = new CompositeDisposable();
}

export function deactivate() {
    subscriptions.dispose();
}

export function consumeIndie(registerIndie) {
    const linter = registerIndie({
            name: 'YOLOL',
        });
    subscriptions.add(linter);

    // Setting and clearing messages per filePath
    subscriptions.add(atom.workspace.observeTextEditors(function(textEditor) {
        lintEditor(linter, textEditor)
        textEditor.onDidChange(() => lintEditor(linter, textEditor));

        const subscription = textEditor.onDidDestroy(function() {
                subscriptions.remove(subscription);
                linter.setMessages(editorPath, []);
            })
        subscriptions.add(subscription);
    }));
}

function lintEditor(linter, textEditor) {
    const editorPath = textEditor.getPath();
    if (!editorPath) {
        return;
    }

    let messages = [];
    if (textEditor.getGrammar().id == "source.yolol") {
        let i = 0;
        for (; i < textEditor.getLineCount(); i++) {
            let line = textEditor.lineTextForBufferRow(i);
            if (line.length > 70) {
                messages.push({
                        severity: 'warning',
                        location: {
                            file: editorPath,
                            position: [[i, 0], [i, line.length]],
                        },
                        excerpt: `Line length exceeded`,
                        description: `YOLOL lines must be 70 characters or less.`
                    });
            }
        }
        if (--i >= 20) {
            messages.push({
                    severity: 'warning',
                    location: {
                        file: editorPath,
                        position: [[20, 0], [i, textEditor.lineTextForBufferRow(i).length]],
                    },
                    excerpt: `Line limit exceeded`,
                    description: `YOLOL scripts are limited to 20 lines or less.`
                });
        }

        linter.setMessages(editorPath, messages);
    }
}
