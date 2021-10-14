#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_if = 1,
  anon_sym_then = 2,
  anon_sym_else = 3,
  anon_sym_end = 4,
  anon_sym_goto = 5,
  sym_assignment_operator = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  sym_pre_unary_operator = 9,
  sym_post_unary_operator = 10,
  sym_binary_operator = 11,
  sym_identifier = 12,
  anon_sym_COLON = 13,
  sym_string = 14,
  sym_number = 15,
  sym_program = 16,
  sym_statement = 17,
  sym_conditional = 18,
  sym_goto = 19,
  sym_assignment = 20,
  sym_expression = 21,
  sym_unary_operation = 22,
  sym_pre_unary_operation = 23,
  sym_post_unary_operation = 24,
  sym_binary_operation = 25,
  sym_variable = 26,
  sym_field = 27,
  aux_sym_program_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_goto] = "goto",
  [sym_assignment_operator] = "assignment_operator",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_pre_unary_operator] = "pre_unary_operator",
  [sym_post_unary_operator] = "post_unary_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_program] = "program",
  [sym_statement] = "statement",
  [sym_conditional] = "conditional",
  [sym_goto] = "goto",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_unary_operation] = "unary_operation",
  [sym_pre_unary_operation] = "pre_unary_operation",
  [sym_post_unary_operation] = "post_unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_variable] = "variable",
  [sym_field] = "field",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_goto] = anon_sym_goto,
  [sym_assignment_operator] = sym_assignment_operator,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_pre_unary_operator] = sym_pre_unary_operator,
  [sym_post_unary_operator] = sym_post_unary_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_program] = sym_program,
  [sym_statement] = sym_statement,
  [sym_conditional] = sym_conditional,
  [sym_goto] = sym_goto,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_unary_operation] = sym_unary_operation,
  [sym_pre_unary_operation] = sym_pre_unary_operation,
  [sym_post_unary_operation] = sym_post_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_variable] = sym_variable,
  [sym_field] = sym_field,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_pre_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_post_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional] = {
    .visible = true,
    .named = true,
  },
  [sym_goto] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_post_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(44);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'g') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == ')') ADVANCE(36);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 't') ADVANCE(11);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(57);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(50);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(60);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_assignment_operator);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_assignment_operator);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_pre_unary_operator);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_pre_unary_operator);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_pre_unary_operator);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_post_unary_operator);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_post_unary_operator);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '+') ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '+') ADVANCE(40);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_binary_operator);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(65);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(61);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(58);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [sym_assignment_operator] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_post_unary_operator] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(58),
    [sym_statement] = STATE(14),
    [sym_conditional] = STATE(38),
    [sym_goto] = STATE(38),
    [sym_assignment] = STATE(38),
    [sym_variable] = STATE(56),
    [sym_field] = STATE(56),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_if] = ACTIONS(5),
    [anon_sym_goto] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(44), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [30] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_pre_unary_operator,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(29), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(30), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [60] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_pre_unary_operator,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(25), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(29), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(30), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [90] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(46), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [120] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(45), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [150] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(43), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [180] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(35), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [210] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(42), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [240] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(41), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [270] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      sym_pre_unary_operator,
    STATE(34), 1,
      sym_expression,
    ACTIONS(17), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(33), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [300] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_pre_unary_operator,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(24), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(29), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(30), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [330] = 8,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_pre_unary_operator,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_expression,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(29), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(30), 4,
      sym_unary_operation,
      sym_binary_operation,
      sym_variable,
      sym_field,
  [360] = 8,
    ACTIONS(5), 1,
      anon_sym_if,
    ACTIONS(7), 1,
      anon_sym_goto,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_statement,
      aux_sym_program_repeat1,
    STATE(56), 2,
      sym_variable,
      sym_field,
    STATE(38), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [389] = 8,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_goto,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_COLON,
    STATE(15), 2,
      sym_statement,
      aux_sym_program_repeat1,
    STATE(56), 2,
      sym_variable,
      sym_field,
    STATE(38), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [418] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      anon_sym_goto,
    STATE(47), 1,
      sym_statement,
    STATE(53), 2,
      sym_variable,
      sym_field,
    STATE(48), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [443] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      anon_sym_goto,
    STATE(54), 1,
      sym_statement,
    STATE(53), 2,
      sym_variable,
      sym_field,
    STATE(48), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [468] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      anon_sym_goto,
    STATE(51), 1,
      sym_statement,
    STATE(53), 2,
      sym_variable,
      sym_field,
    STATE(48), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [493] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_COLON,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(47), 1,
      anon_sym_goto,
    STATE(57), 1,
      sym_statement,
    STATE(53), 2,
      sym_variable,
      sym_field,
    STATE(48), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [518] = 2,
    ACTIONS(51), 3,
      sym_assignment_operator,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(49), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [530] = 2,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(55), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [542] = 2,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(59), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [554] = 2,
    ACTIONS(63), 3,
      sym_assignment_operator,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(61), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [566] = 4,
    ACTIONS(69), 1,
      sym_post_unary_operator,
    ACTIONS(71), 1,
      sym_binary_operator,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(67), 3,
      anon_sym_if,
      anon_sym_goto,
      sym_identifier,
  [582] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(75), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [594] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(63), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [606] = 2,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(51), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [618] = 4,
    ACTIONS(69), 1,
      sym_post_unary_operator,
    ACTIONS(71), 1,
      sym_binary_operator,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(79), 3,
      anon_sym_if,
      anon_sym_goto,
      sym_identifier,
  [634] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(83), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [646] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(87), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [658] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(91), 5,
      anon_sym_if,
      anon_sym_goto,
      sym_post_unary_operator,
      sym_binary_operator,
      sym_identifier,
  [670] = 2,
    ACTIONS(83), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(81), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [681] = 2,
    ACTIONS(87), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(85), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [692] = 2,
    ACTIONS(91), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(89), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [703] = 2,
    ACTIONS(75), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(73), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [714] = 2,
    ACTIONS(55), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(53), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [725] = 2,
    ACTIONS(59), 2,
      sym_post_unary_operator,
      sym_binary_operator,
    ACTIONS(57), 4,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
  [736] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(95), 3,
      anon_sym_if,
      anon_sym_goto,
      sym_identifier,
  [746] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(99), 3,
      anon_sym_if,
      anon_sym_goto,
      sym_identifier,
  [756] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(103), 3,
      anon_sym_if,
      anon_sym_goto,
      sym_identifier,
  [766] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(65), 2,
      anon_sym_else,
      anon_sym_end,
  [777] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(77), 2,
      anon_sym_else,
      anon_sym_end,
  [788] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
  [798] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(111), 1,
      anon_sym_then,
  [808] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
  [818] = 3,
    ACTIONS(105), 1,
      sym_post_unary_operator,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(115), 1,
      anon_sym_then,
  [828] = 2,
    ACTIONS(117), 1,
      anon_sym_else,
    ACTIONS(119), 1,
      anon_sym_end,
  [835] = 1,
    ACTIONS(93), 2,
      anon_sym_else,
      anon_sym_end,
  [840] = 1,
    ACTIONS(101), 2,
      anon_sym_else,
      anon_sym_end,
  [845] = 1,
    ACTIONS(97), 2,
      anon_sym_else,
      anon_sym_end,
  [850] = 2,
    ACTIONS(121), 1,
      anon_sym_else,
    ACTIONS(123), 1,
      anon_sym_end,
  [857] = 1,
    ACTIONS(125), 1,
      sym_identifier,
  [861] = 1,
    ACTIONS(127), 1,
      sym_assignment_operator,
  [865] = 1,
    ACTIONS(129), 1,
      anon_sym_end,
  [869] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [873] = 1,
    ACTIONS(133), 1,
      sym_assignment_operator,
  [877] = 1,
    ACTIONS(135), 1,
      anon_sym_end,
  [881] = 1,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 180,
  [SMALL_STATE(9)] = 210,
  [SMALL_STATE(10)] = 240,
  [SMALL_STATE(11)] = 270,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 330,
  [SMALL_STATE(14)] = 360,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 418,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 468,
  [SMALL_STATE(19)] = 493,
  [SMALL_STATE(20)] = 518,
  [SMALL_STATE(21)] = 530,
  [SMALL_STATE(22)] = 542,
  [SMALL_STATE(23)] = 554,
  [SMALL_STATE(24)] = 566,
  [SMALL_STATE(25)] = 582,
  [SMALL_STATE(26)] = 594,
  [SMALL_STATE(27)] = 606,
  [SMALL_STATE(28)] = 618,
  [SMALL_STATE(29)] = 634,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 658,
  [SMALL_STATE(32)] = 670,
  [SMALL_STATE(33)] = 681,
  [SMALL_STATE(34)] = 692,
  [SMALL_STATE(35)] = 703,
  [SMALL_STATE(36)] = 714,
  [SMALL_STATE(37)] = 725,
  [SMALL_STATE(38)] = 736,
  [SMALL_STATE(39)] = 746,
  [SMALL_STATE(40)] = 756,
  [SMALL_STATE(41)] = 766,
  [SMALL_STATE(42)] = 777,
  [SMALL_STATE(43)] = 788,
  [SMALL_STATE(44)] = 798,
  [SMALL_STATE(45)] = 808,
  [SMALL_STATE(46)] = 818,
  [SMALL_STATE(47)] = 828,
  [SMALL_STATE(48)] = 835,
  [SMALL_STATE(49)] = 840,
  [SMALL_STATE(50)] = 845,
  [SMALL_STATE(51)] = 850,
  [SMALL_STATE(52)] = 857,
  [SMALL_STATE(53)] = 861,
  [SMALL_STATE(54)] = 865,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 873,
  [SMALL_STATE(57)] = 877,
  [SMALL_STATE(58)] = 881,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(55),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_unary_operation, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_unary_operation, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_unary_operation, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_unary_operation, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 7),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_yolol(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
