#ifndef   MYCTYPE_H
#define   MYCTYPE_H

#define   UPPER    0x1
#define   LOWER    0x2
#define   DIGIT    0x4
#define   XDIGIT   0x8
#define   SPACE    0x10
#define   PUNCT    0x20
#define   PRINT    0x40
#define   BLANK    0x80
#define   GRAPH    0x100
#define   CNTRL    0X200


#define  is_upper(c)   (ctype_[c] & UPPER)
#define  is_lower(c)   (ctype_[c] & LOWER)
#define  is_alpha(c)   (ctype_[c] & (LOWER | UPPER))
#define  is_digit(c)   (ctype_[c] & (DIGIT))
#define  is_alnum(c)   (ctype_[c] & (LOWER | UPPER | DIGIT))
#define  is_xdigit(c)  (ctype_[c] & DIGIT)
#define  is_space(c)   (ctype_[c] & SPACE)
#define  is_punct(c)   (ctype_[c] & PUNCT)
#define  is_print(c)   (ctype_[c] & PRINT)
#define  is_blank(c)   (ctype_[c] & BLANK)
#define  is_graph(c)   (ctype_[c] & GRAPH)
#define  is_cntrl(c)   (ctype_[c] & CNTRL)

extern const int ctype_[];


#endif
