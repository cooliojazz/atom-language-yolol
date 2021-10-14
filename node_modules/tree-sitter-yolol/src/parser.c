#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym_string = 1,
  sym_number = 2,
  sym_identifier = 3,
  anon_sym_COLON = 4,
  anon_sym_if = 5,
  anon_sym_then = 6,
  anon_sym_else = 7,
  anon_sym_end = 8,
  anon_sym_goto = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_binary_operator = 12,
  sym_pre_unary_operator = 13,
  sym_post_unary_operator = 14,
  aux_sym_assignment_token1 = 15,
  sym_source_file = 16,
  sym_variable = 17,
  sym_field = 18,
  sym_statement = 19,
  sym_conditional = 20,
  sym_goto = 21,
  sym_expression = 22,
  sym_binary_operation = 23,
  sym_unary_operation = 24,
  sym_pre_unary_operation = 25,
  sym_post_unary_operation = 26,
  sym_assignment = 27,
  aux_sym_source_file_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_goto] = "goto",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_binary_operator] = "binary_operator",
  [sym_pre_unary_operator] = "pre_unary_operator",
  [sym_post_unary_operator] = "post_unary_operator",
  [aux_sym_assignment_token1] = "assignment_token1",
  [sym_source_file] = "source_file",
  [sym_variable] = "variable",
  [sym_field] = "field",
  [sym_statement] = "statement",
  [sym_conditional] = "conditional",
  [sym_goto] = "goto",
  [sym_expression] = "expression",
  [sym_binary_operation] = "binary_operation",
  [sym_unary_operation] = "unary_operation",
  [sym_pre_unary_operation] = "pre_unary_operation",
  [sym_post_unary_operation] = "post_unary_operation",
  [sym_assignment] = "assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_binary_operator] = sym_binary_operator,
  [sym_pre_unary_operator] = sym_pre_unary_operator,
  [sym_post_unary_operator] = sym_post_unary_operator,
  [aux_sym_assignment_token1] = aux_sym_assignment_token1,
  [sym_source_file] = sym_source_file,
  [sym_variable] = sym_variable,
  [sym_field] = sym_field,
  [sym_statement] = sym_statement,
  [sym_conditional] = sym_conditional,
  [sym_goto] = sym_goto,
  [sym_expression] = sym_expression,
  [sym_binary_operation] = sym_binary_operation,
  [sym_unary_operation] = sym_unary_operation,
  [sym_pre_unary_operation] = sym_pre_unary_operation,
  [sym_post_unary_operation] = sym_post_unary_operation,
  [sym_assignment] = sym_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_pre_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_post_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_assignment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'g') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(34);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == 'A') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(70);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '+') ADVANCE(65);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(39);
      if (lookahead == 'O') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(48);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '^') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(38);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(44);
      if (lookahead == 'C') ADVANCE(40);
      if (lookahead == 'S') ADVANCE(37);
      if (lookahead == 'T') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead == 'Q') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_goto);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '+') ADVANCE(72);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_pre_unary_operator);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_pre_unary_operator);
      if (lookahead == '-') ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_post_unary_operator);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_assignment_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_assignment_token1);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 25},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [sym_post_unary_operator] = ACTIONS(1),
    [aux_sym_assignment_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym_variable] = STATE(57),
    [sym_field] = STATE(57),
    [sym_statement] = STATE(14),
    [sym_conditional] = STATE(38),
    [sym_goto] = STATE(38),
    [sym_assignment] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_goto] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(46), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [30] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(44), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [60] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_pre_unary_operator,
    STATE(20), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_string,
      sym_number,
    STATE(26), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(29), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [90] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(45), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [120] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_pre_unary_operator,
    STATE(23), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_string,
      sym_number,
    STATE(26), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(29), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [150] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(42), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [180] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(43), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [210] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(33), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [240] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(35), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [270] = 8,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      sym_pre_unary_operator,
    STATE(41), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(32), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(34), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [300] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_pre_unary_operator,
    STATE(24), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_string,
      sym_number,
    STATE(26), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(29), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [330] = 8,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      anon_sym_COLON,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_pre_unary_operator,
    STATE(27), 1,
      sym_expression,
    ACTIONS(21), 2,
      sym_string,
      sym_number,
    STATE(26), 2,
      sym_pre_unary_operation,
      sym_post_unary_operation,
    STATE(29), 4,
      sym_variable,
      sym_field,
      sym_binary_operation,
      sym_unary_operation,
  [360] = 8,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(11), 1,
      anon_sym_goto,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym_variable,
      sym_field,
    STATE(38), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [389] = 8,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_COLON,
    ACTIONS(41), 1,
      anon_sym_if,
    ACTIONS(44), 1,
      anon_sym_goto,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(57), 2,
      sym_variable,
      sym_field,
    STATE(38), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [418] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(49), 1,
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
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(49), 1,
      anon_sym_goto,
    STATE(55), 1,
      sym_statement,
    STATE(53), 2,
      sym_variable,
      sym_field,
    STATE(48), 3,
      sym_conditional,
      sym_goto,
      sym_assignment,
  [468] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(49), 1,
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
  [493] = 7,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_COLON,
    ACTIONS(47), 1,
      anon_sym_if,
    ACTIONS(49), 1,
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
  [518] = 4,
    ACTIONS(55), 1,
      sym_binary_operator,
    ACTIONS(57), 1,
      sym_post_unary_operator,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(53), 3,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
  [534] = 2,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(61), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [546] = 2,
    ACTIONS(65), 1,
      sym_binary_operator,
    ACTIONS(63), 6,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
      aux_sym_assignment_token1,
  [558] = 2,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(69), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [570] = 4,
    ACTIONS(55), 1,
      sym_binary_operator,
    ACTIONS(57), 1,
      sym_post_unary_operator,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(73), 3,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
  [586] = 2,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(77), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [598] = 2,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(81), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [610] = 2,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(85), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [622] = 2,
    ACTIONS(89), 1,
      sym_binary_operator,
    ACTIONS(87), 6,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
      aux_sym_assignment_token1,
  [634] = 2,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(93), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [646] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(89), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [658] = 2,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_post_unary_operator,
    ACTIONS(65), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
      sym_binary_operator,
  [670] = 2,
    ACTIONS(81), 1,
      sym_binary_operator,
    ACTIONS(79), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [681] = 2,
    ACTIONS(69), 1,
      sym_binary_operator,
    ACTIONS(67), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [692] = 2,
    ACTIONS(93), 1,
      sym_binary_operator,
    ACTIONS(91), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [703] = 2,
    ACTIONS(85), 1,
      sym_binary_operator,
    ACTIONS(83), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [714] = 2,
    ACTIONS(77), 1,
      sym_binary_operator,
    ACTIONS(75), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [725] = 2,
    ACTIONS(61), 1,
      sym_binary_operator,
    ACTIONS(59), 5,
      anon_sym_then,
      anon_sym_else,
      anon_sym_end,
      anon_sym_RPAREN,
      sym_post_unary_operator,
  [736] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(97), 3,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
  [746] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(101), 3,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
  [756] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_COLON,
    ACTIONS(105), 3,
      sym_identifier,
      anon_sym_if,
      anon_sym_goto,
  [766] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(51), 2,
      anon_sym_else,
      anon_sym_end,
  [777] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(71), 2,
      anon_sym_else,
      anon_sym_end,
  [788] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
  [798] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(113), 1,
      anon_sym_then,
  [808] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [818] = 3,
    ACTIONS(107), 1,
      sym_binary_operator,
    ACTIONS(109), 1,
      sym_post_unary_operator,
    ACTIONS(117), 1,
      anon_sym_then,
  [828] = 2,
    ACTIONS(119), 1,
      anon_sym_else,
    ACTIONS(121), 1,
      anon_sym_end,
  [835] = 1,
    ACTIONS(95), 2,
      anon_sym_else,
      anon_sym_end,
  [840] = 1,
    ACTIONS(103), 2,
      anon_sym_else,
      anon_sym_end,
  [845] = 1,
    ACTIONS(99), 2,
      anon_sym_else,
      anon_sym_end,
  [850] = 2,
    ACTIONS(123), 1,
      anon_sym_else,
    ACTIONS(125), 1,
      anon_sym_end,
  [857] = 1,
    ACTIONS(127), 1,
      sym_identifier,
  [861] = 1,
    ACTIONS(129), 1,
      aux_sym_assignment_token1,
  [865] = 1,
    ACTIONS(131), 1,
      anon_sym_end,
  [869] = 1,
    ACTIONS(133), 1,
      anon_sym_end,
  [873] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [877] = 1,
    ACTIONS(137), 1,
      aux_sym_assignment_token1,
  [881] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
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
  [SMALL_STATE(21)] = 534,
  [SMALL_STATE(22)] = 546,
  [SMALL_STATE(23)] = 558,
  [SMALL_STATE(24)] = 570,
  [SMALL_STATE(25)] = 586,
  [SMALL_STATE(26)] = 598,
  [SMALL_STATE(27)] = 610,
  [SMALL_STATE(28)] = 622,
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

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_unary_operation, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_unary_operation, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre_unary_operation, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre_unary_operation, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 7),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditional, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_conditional, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_YOLOL(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
