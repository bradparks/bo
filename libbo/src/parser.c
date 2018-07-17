//  Copyright (c) 2018 Karl Stenerud. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall remain in place
// in this source code.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//


#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include "bo_internal.h"


// --------------
// Generated Code
// --------------

// Generated by build_types_table.c
typedef enum
{
    CHARACTER_FLAG_NONE = 0x00,
    CHARACTER_FLAG_CONTROL = 0x01,
    CHARACTER_FLAG_WHITESPACE = 0x02,
    CHARACTER_FLAG_BASE_10 = 0x04,
    CHARACTER_FLAG_BASE_16 = 0x08,
    CHARACTER_FLAG_NUMBER = 0x10,
    CHARACTER_FLAG_ALPHANUMERIC = 0x20,
    CHARACTER_FLAG_SYMBOL = 0x40,
    CHARACTER_FLAG_PRINTABLE = 0x80,
} character_flag;

// Generated by build_types_table.c
static const uint8_t g_character_flags[256] =
{
    /* NUL   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* SOH   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* STX   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* ETX   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* EOT   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* ENQ   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* ACK   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* BEL   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* BS    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* HT    */ (uint8_t)(CHARACTER_FLAG_CONTROL | CHARACTER_FLAG_WHITESPACE),
    /* LF    */ (uint8_t)(CHARACTER_FLAG_CONTROL | CHARACTER_FLAG_WHITESPACE),
    /* VT    */ (uint8_t)(CHARACTER_FLAG_CONTROL | CHARACTER_FLAG_WHITESPACE),
    /* FF    */ (uint8_t)(CHARACTER_FLAG_CONTROL | CHARACTER_FLAG_WHITESPACE),
    /* CR    */ (uint8_t)(CHARACTER_FLAG_CONTROL | CHARACTER_FLAG_WHITESPACE),
    /* SO    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* SI    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* DLE   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* DC1   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* DC2   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* DC3   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* DC4   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* NAK   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* SYN   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* ETB   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* CAN   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* EM    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* SUB   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* ESC   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* FS    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* GS    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* RS    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* US    */ (uint8_t)(CHARACTER_FLAG_CONTROL),
    /* Space */ (uint8_t)(CHARACTER_FLAG_WHITESPACE),
    /* !     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* "     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* #     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* $     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* %     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* &     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* '     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* (     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* )     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* *     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* +     */ (uint8_t)(CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ,     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* -     */ (uint8_t)(CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* .     */ (uint8_t)(CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* /     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* 0     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 1     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 2     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 3     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 4     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 5     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 6     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 7     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 8     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* 9     */ (uint8_t)(CHARACTER_FLAG_BASE_10 | CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* :     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ;     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* <     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* =     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* >     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ?     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* @     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* A     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* B     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* C     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* D     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* E     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* F     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* G     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* H     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* I     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* J     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* K     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* L     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* M     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* N     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* O     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* P     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* Q     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* R     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* S     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* T     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* U     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* V     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* W     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* X     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* Y     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* Z     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* [     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* \     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ]     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ^     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* _     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* `     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* a     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* b     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* c     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* d     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* e     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* f     */ (uint8_t)(CHARACTER_FLAG_BASE_16 | CHARACTER_FLAG_NUMBER | CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* g     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* h     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* i     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* j     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* k     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* l     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* m     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* n     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* o     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* p     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* q     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* r     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* s     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* t     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* u     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* v     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* w     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* x     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* y     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* z     */ (uint8_t)(CHARACTER_FLAG_ALPHANUMERIC | CHARACTER_FLAG_PRINTABLE),
    /* {     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* |     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* }     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* ~     */ (uint8_t)(CHARACTER_FLAG_SYMBOL | CHARACTER_FLAG_PRINTABLE),
    /* DEL   */ (uint8_t)(CHARACTER_FLAG_CONTROL),
};



// -------
// Utility
// -------

static const char* g_data_type_name[] =
{
    "none",
    "binary",
    "int",
    "hex",
    "octal",
    "boolean",
    "float",
    "decimal",
    "string",
};

static int g_min_data_widths[] =
{
    0,
    1, // Binary
    1, // Int
    1, // Hex
    1, // Octal
    1, // Boolean
    2, // Float
    4, // Decimal
    1, // String
};

static inline bool should_continue_parsing(bo_context* context)
{
    return context->parse_should_continue;
}

static inline void stop_parsing_at(bo_context* context, uint8_t* position)
{
    context->src_buffer.pos = position;
    stop_parsing(context);
}

static bool verify_data_width(bo_context* context, bo_data_type data_type, int width)
{
    if(width < g_min_data_widths[data_type])
    {
        bo_notify_error(context, "Width %d cannot be used with data type %s", width, g_data_type_name[data_type]);
        return false;
    }
    return true;
}

static inline bool is_decimal_character(int ch)
{
    return g_character_flags[ch] & CHARACTER_FLAG_BASE_10;
}

static inline bool is_hex_character(int ch)
{
    return g_character_flags[ch] & CHARACTER_FLAG_BASE_16;
}

static inline bool is_numeric_character(int ch)
{
    return g_character_flags[ch] & CHARACTER_FLAG_NUMBER;
}

static inline bool is_whitespace_character(int ch)
{
    return g_character_flags[ch] & CHARACTER_FLAG_WHITESPACE;
}

static inline bool is_at_end_of_input(bo_context* context)
{
    return context->is_at_end_of_input;
}

static inline bool is_last_data_segment(bo_context* context)
{
    return context->data_segment_type == DATA_SEGMENT_LAST;
}

static inline void null_terminate_string(uint8_t* ptr)
{
    *ptr = 0;
}

static bo_data_type extract_data_type(bo_context* context, uint8_t* token, int offset)
{
    if(token + offset >= buffer_get_end(&context->src_buffer))
    {
        bo_notify_error(context, "%s: offset %d: Missing data type", token, offset);
        return TYPE_NONE;
    }
    switch(token[offset])
    {
        case 'B':
            return TYPE_BINARY;
        case 'i':
            return TYPE_INT;
        case 'h':
            return TYPE_HEX;
        case 'o':
            return TYPE_OCTAL;
        case 'b':
            return TYPE_BOOLEAN;
        case 'f':
            return TYPE_FLOAT;
        case 'd':
            return TYPE_DECIMAL;
        case 's':
            return TYPE_STRING;
        default:
            bo_notify_error(context, "%s: offset %d: %c is not a valid data type", token, offset, token[offset]);
            return TYPE_NONE;
    }
}

static int extract_data_width(bo_context* context, uint8_t* token, int offset)
{
    if(token + offset >= buffer_get_end(&context->src_buffer))
    {
        bo_notify_error(context, "%s: offset %d: Missing data width", token, offset);
        return 0;
    }
    switch(token[offset])
    {
        case '1':
            switch(token[offset + 1])
            {
                case '6':
                    return 16;
                case '0': case '1': case '2': case '3': case '4': case '5':
                case '7': case '8': case '9':
                {
                    unsigned int width = strtoul((char*)token + offset, NULL, 16);
                    bo_notify_error(context, "%s: offset %d: %d is not a valid data width", token, offset, width);
                    return 0;
                }
                default:
                    return 1;
            }
        case '2':
            return 2;
        case '4':
            return 4;
        case '8':
            return 8;
        case '0': case '3': case '5': case '6': case '7': case '9':
        {
            unsigned int width = strtoul((char*)token + offset, NULL, 10);
            bo_notify_error(context, "%s: offset %d: %d is not a valid data width", token, offset, width);
            return 0;
        }
        default:
            bo_notify_error(context, "%s: offset %d: Not a valid data width", token, offset);
            return 0;
    }
}

static bo_endianness extract_endianness(bo_context* context, uint8_t* token, int offset)
{
    if(token + offset >= buffer_get_end(&context->src_buffer))
    {
        bo_notify_error(context, "%s: offset %d: Missing endianness", token, offset);
        return BO_ENDIAN_NONE;
    }

    switch(token[offset])
    {
        case 'b':
            return BO_ENDIAN_BIG;
        case 'l':
            return BO_ENDIAN_LITTLE;
        default:
            bo_notify_error(context, "%s: offset %d: %c is not a valid endianness", token, offset, token[offset]);
            return BO_ENDIAN_NONE;
    }
}



// ---------------
// General Parsing
// ---------------

/**
 * Terminate the token pointed to by the src buffer.
 * THIS FUNCTION MODIFIES MEMORY!
 *
 * Reads until the first whitespace and replaces the whitespace with null termination.
 * If no whitespace is encountered, and we're mid stream, ends parsing.
 *
 * @param context The context.
 * @return Pointer to one past the end of the token.
 */
static uint8_t* terminate_token(bo_context* context)
{
    uint8_t* ptr = buffer_get_position(&context->src_buffer);
    for(; ptr < buffer_get_end(&context->src_buffer); ptr++)
    {
        if(is_whitespace_character(*ptr))
        {
            null_terminate_string(ptr);
            return ptr;
        }
    }
    context->is_at_end_of_input = true;
    if(context->data_segment_type == DATA_SEGMENT_STREAM)
    {
        stop_parsing(context);
    }
    return ptr;
}

static inline uint8_t* handle_end_of_data(bo_context* context,
                                          uint8_t* interruption_point,
                                          const char* error_message)
{
    if(is_last_data_segment(context))
    {
        bo_notify_error(context, error_message);
        return NULL;
    }

    stop_parsing_at(context, interruption_point);
    return interruption_point;
}

/**
 * Parse a string. The input string must begin and end with double quotes (").
 * THIS FUNCTION MODIFIES MEMORY!
 *
 * The string may contain escape sequences, which will be converted to the values they represent.
 * Upon successful completion, the memory at pointer string will contain an unescaped, unquoted,
 * null terminated string.
 *
 * @param context The context.
 * @param string The string to parse.
 * @return A pointer to the end of the string, or NULL if an error occurred.
 */
static uint8_t* parse_string(bo_context* context, int offset)
{
    uint8_t* string = buffer_get_position(&context->src_buffer) + offset;
    uint8_t* write_pos = string;
    uint8_t* read_pos = string;
    uint8_t* read_end = buffer_get_end(&context->src_buffer);

    for(; read_pos < read_end; read_pos++)
    {
        switch(*read_pos)
        {
            case '"':
                null_terminate_string(write_pos);
                buffer_set_position(&context->src_buffer, read_pos);
                return write_pos;
            case '\\':
            {
                uint8_t* escape_pos = read_pos;
                int remaining_bytes = read_end - read_pos;
                if(remaining_bytes < 1)
                {
                    return handle_end_of_data(context, escape_pos, "Unterminated escape sequence");
                }

                read_pos++;
                switch(*read_pos)
                {
                    case 'r': *write_pos++ = '\r'; break;
                    case 'n': *write_pos++ = '\n'; break;
                    case 't': *write_pos++ = '\t'; break;
                    case '\\': *write_pos++ = '\\'; break;
                    case '\"': *write_pos++ = '\"'; break;
                    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':
                    case '8': case '9': case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
                    case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
                    {
                        if(remaining_bytes < 2)
                        {
                            return handle_end_of_data(context, escape_pos, "Unterminated hex escape sequence");
                        }
                        if(!is_hex_character(read_pos[1]))
                        {
                            bo_notify_error(context, "Invalid hex escape sequence");
                            return NULL;
                        }
                        uint8_t number_buffer[3] = {read_pos[0], read_pos[1], 0};
                        read_pos += 1;
                        *write_pos++ = (uint8_t)strtoul((char*)number_buffer, NULL, 16);
                        break;
                    }
                    case 'u':
                    {
                        if(remaining_bytes < 5)
                        {
                            return handle_end_of_data(context, escape_pos, "Unterminated unicode escape sequence");
                        }
                        if(!is_hex_character(read_pos[1])
                        || !is_hex_character(read_pos[2])
                        || !is_hex_character(read_pos[3])
                        || !is_hex_character(read_pos[4]))
                        {
                            bo_notify_error(context, "Invalid unicode escape sequence");
                            return NULL;
                        }
                        uint8_t number_buffer[5] = {read_pos[1], read_pos[2], read_pos[3], read_pos[4], 0};
                        read_pos += 4;
                        unsigned int codepoint = strtoul((char*)number_buffer, NULL, 16);
                        if(codepoint <= 0x7f)
                        {
                            *write_pos++ = (uint8_t)codepoint;
                        }
                        else if(codepoint <= 0x7ff)
                        {
                            *write_pos++ = (uint8_t)((codepoint >> 6) | 0xc0);
                            *write_pos++ = (uint8_t)((codepoint & 0x3f) | 0x80);
                        }
                        else
                        {
                            *write_pos++ = (uint8_t)((codepoint >> 12) | 0xe0);
                            *write_pos++ = (uint8_t)(((codepoint >> 6) & 0x3f) | 0x80);
                            *write_pos++ = (uint8_t)((codepoint & 0x3f) | 0x80);
                        }
                        break;
                    }
                    default:
                        bo_notify_error(context, "Invalid escape sequence");
                        return NULL;
                }
                break;
            }
            default:
                *write_pos++ = *read_pos;
                break;
        }
    }

    return handle_end_of_data(context, read_pos, "Unterminated string");
}



// ------
// Events
// ------

static void on_unknown_token(bo_context* context)
{
    uint8_t* token = buffer_get_position(&context->src_buffer);
    terminate_token(context);
    if(!is_at_end_of_input(context))
    {
        bo_notify_error(context, "%s: Unknown token", token);
    }

    int length = buffer_get_end(&context->src_buffer) - token;
    uint8_t* token_copy = malloc(length + 1);
    memcpy(token_copy, token, length);
    null_terminate_string(token_copy + length);
    bo_notify_error(context, "%s: Unknown token", token_copy);
    free(token_copy);
}

static void on_string(bo_context* context, int offset)
{
    uint8_t* string_start = buffer_get_position(&context->src_buffer) + offset;
    uint8_t* string_end = parse_string(context, offset);
    if(is_error_condition(context)) return;
    if(string_end > string_start)
    {
        bo_on_string(context, string_start, string_end);
    }
    if(!should_continue_parsing(context))
    {
        context->is_spanning_string = true;
    }
}

static uint8_t* prefix_suffix_process_common(bo_context* context)
{
    uint8_t* token = buffer_get_position(&context->src_buffer);
    if(token[1] != '"')
    {
        terminate_token(context);
        bo_notify_error(context, "%s: Not a string", token + 1);
        return NULL;
    }

    int offset = 2;
    uint8_t* string = buffer_get_position(&context->src_buffer) + offset;
    parse_string(context, offset);
    if(!should_continue_parsing(context))
    {
        buffer_set_position(&context->src_buffer, token);
    }
    return string;
}

static void on_prefix(bo_context* context)
{
    uint8_t* string = prefix_suffix_process_common(context);
    if(!should_continue_parsing(context)) return;
    bo_on_prefix(context, string);
}

static void on_suffix(bo_context* context)
{
    uint8_t* string = prefix_suffix_process_common(context);
    if(!should_continue_parsing(context)) return;
    bo_on_suffix(context, string);
}

static void on_input_type(bo_context* context)
{
    uint8_t* end = terminate_token(context);
    if(!should_continue_parsing(context)) return;

    uint8_t* token = buffer_get_position(&context->src_buffer);
    int offset = 1;

    bo_data_type data_type = extract_data_type(context, token, offset);
    if(!should_continue_parsing(context)) return;
    offset += 1;

    int data_width = extract_data_width(context, token, offset);
    if(!should_continue_parsing(context)) return;
    offset += data_width > 8 ? 2 : 1;

    bo_endianness endianness = BO_ENDIAN_NONE;
    if(data_width > 1)
    {
        endianness = extract_endianness(context, token, offset);
        if(!should_continue_parsing(context)) return;
    }

    if(!verify_data_width(context, data_type, data_width)) return;

    bo_on_input_type(context, data_type, data_width, endianness);
    if(!should_continue_parsing(context)) return;
    buffer_set_position(&context->src_buffer, end);
}

static void on_output_type(bo_context* context)
{
    uint8_t* end = terminate_token(context);
    if(!should_continue_parsing(context)) return;
    uint8_t* token = buffer_get_position(&context->src_buffer);
    int token_length = end - token;
    int offset = 1;

    bo_data_type data_type = extract_data_type(context, token, offset);
    if(!should_continue_parsing(context)) return;
    offset += 1;

    int data_width = extract_data_width(context, token, offset);
    if(!should_continue_parsing(context)) return;
    offset += data_width > 8 ? 2 : 1;

    bo_endianness endianness = BO_ENDIAN_NONE;
    unsigned int print_width = 1;

    if(data_width > 1 || token_length > offset)
    {
        endianness = extract_endianness(context, token, offset);
        if(!should_continue_parsing(context)) return;
        offset += 1;

        if(data_type != TYPE_BINARY && token + offset < buffer_get_end(&context->src_buffer))
        {
            if(!is_decimal_character(token[offset]))
            {
                bo_notify_error(context, "%s: offset %d: Not a valid print width", token, offset);
                return;
            }

            print_width = strtoul((char*)token + offset, NULL, 10);
        }
    }

    if(!verify_data_width(context, data_type, data_width)) return;

    bo_on_output_type(context, data_type, data_width, endianness, print_width);
    if(!should_continue_parsing(context)) return;
    buffer_set_position(&context->src_buffer, end);
}

static void on_preset(bo_context* context)
{
    uint8_t* end = terminate_token(context);
    if(!should_continue_parsing(context)) return;

    uint8_t* token = buffer_get_position(&context->src_buffer);
    bo_on_preset(context, token + 1);
    if(!should_continue_parsing(context)) return;
    buffer_set_position(&context->src_buffer, end);
}

static void on_number(bo_context* context)
{
    uint8_t* end = terminate_token(context);
    if(!should_continue_parsing(context)) return;

    uint8_t* token = buffer_get_position(&context->src_buffer);
    bo_on_number(context, token);
    if(!should_continue_parsing(context)) return;
    buffer_set_position(&context->src_buffer, end);
}



// ---------
// Parse API
// ---------

char* bo_process(void* void_context, char* data, int data_length, bo_data_segment_type data_segment_type)
{
    if(BO_ENABLE_LOGGING)
    {
        char ch = data[data_length];
        data[data_length] = 0;
        LOG("bo_process [%s]", data);
        data[data_length] = ch;
    }

    if(data_length < 1)
    {
        LOG("No data to process");
        return data;
    }

    bo_context* context = (bo_context*)void_context;
    context->src_buffer.start = context->src_buffer.pos = (uint8_t*)data;
    context->src_buffer.end = context->src_buffer.start + data_length;

    if(context->input.data_type == TYPE_BINARY)
    {
        bo_on_bytes(context, context->src_buffer.start, data_length);
        return (char*)buffer_get_end(&context->src_buffer);
    }

    context->data_segment_type = data_segment_type;
    context->is_at_end_of_input = false;
    context->is_error_condition = false;
    context->parse_should_continue = true;

    if(context->is_spanning_string)
    {
        context->is_spanning_string = false;
        on_string(context, 0);
        context->src_buffer.pos++;
    }

    const uint8_t* const end = context->src_buffer.end;
    for(;context->src_buffer.pos < end; context->src_buffer.pos++)
    {
        switch(*context->src_buffer.pos)
        {
            case '\n':
                // TODO: Line count
                break;
            case ' ': case '\t': case '\r':
                break;
            case '"':
                on_string(context, 1);
                break;
            case 'i':
                on_input_type(context);
                break;
            case 'o':
                on_output_type(context);
                break;
            case 'p':
                on_prefix(context);
                break;
            case 's':
                on_suffix(context);
                break;
            case 'P':
                on_preset(context);
                break;
            default:
                if(is_numeric_character(*context->src_buffer.pos))
                {
                    on_number(context);
                    break;
                }
                on_unknown_token(context);
                break;
        }
        if(!should_continue_parsing(context))
        {
            break;
        }
        if(is_at_end_of_input(context))
        {
            break;
        }
    }

    // TODO: Check for end of parse and pass any remaining data in directly.
    if(is_error_condition(context))
    {
        return NULL;
    }
    return (char*)buffer_get_position(&context->src_buffer);
}
