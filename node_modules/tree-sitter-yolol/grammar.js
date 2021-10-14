module.exports = grammar({
    name: 'yolol',

    rules: {
        program: $ => repeat($.statement),

        // Lines
        statement: $ => choice($.conditional, $.goto, $.assignment),

        conditional: $ => seq("if", $.expression, "then", $.statement, optional(seq("else", $.statement)), "end"),
        goto: $ => seq("goto", $.expression),
        assignment: $ => seq(choice($.variable, $.field), $.assignment_operator, $.expression),
        assignment_operator: $ => /[+\-*\/%\^]?=/,

        expression: $ => choice(choice($.unary_operation, $.binary_operation, $.string, $.number, $.variable, $.field), seq('(', $.expression, ')')),

        // #Still need to fix OOO#
        unary_operation: $ => choice($.pre_unary_operation, $.post_unary_operation),
        pre_unary_operation: $ => prec.left(seq($.pre_unary_operator, $.expression)),
        pre_unary_operator: $ => /-|\+\+|--|[Aa][Bb][Ss]|[Nn][Oo][Tt]|[Ss][Qq][Rr][Tt]|[Ss][Ii][Nn]|[Cc][Oo][Ss]|[Tt][Aa][Nn]|[Aa][Ss][Ii][Nn]|[Aa][Cc][Oo][Ss]|[Aa][Tt][Aa][Nn]/,
        post_unary_operation: $ => prec.left(seq($.expression, $.post_unary_operator)),
        post_unary_operator: $ => /\+\+|--|!/,

        binary_operation: $ => prec.left(seq($.expression, $.binary_operator, $.expression)),
        binary_operator: $ => /[+\-*\/%^<>]|[<>=!]=|[Aa][Nn][Dd]|[Oo][Rr]/,

        // Data
        identifier: $ => /[A-Za-z]+/,
        variable: $ => $.identifier,
        field: $ => seq(':', $.identifier),

        // Literals
        string: $ => /"([^"]|\\")*"/,
        number: $ => /\d+(?:\.\d{0,3})?/,
    }
});
