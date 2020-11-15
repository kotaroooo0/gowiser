#ifndef __TOKEN_H__
#define __TOKEN_H__

#include "wiser.h"

int text_to_postings_lists(wiser_env *env,
                           const int document_id, const UTF32Char *text,
                           const unsigned int text_len,
                           const int n, inverted_index_hash **postings);
void dump_token(wiser_env *env, int token_id);

#endif /* __TOKEN_H__ */