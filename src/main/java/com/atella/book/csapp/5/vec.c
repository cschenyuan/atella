//#include<malloc/malloc.h>
#include<stdlib.h>
#include"vec.h"

vec_ptr new_rec(long int len) {

    vec_ptr result = (vec_ptr) malloc(sizeof(vec_rec));
    if (!result) return NULL;
    result->len = len;

    if (len > 0) {
        data_t *data = (data_t *) calloc(len, sizeof(data_t));
        if (!data) {
            free((void *) result);
            return NULL;
        }
        result->data = data;
    } else
        result-> data = NULL;
    return result;
}

int get_vec_element(vec_ptr v,long int index,data_t *dest) {

    if (index < 0 || index >= v->len)
        return 0;
    *dest = v->data[index];
    return 1;
}

data_t *get_vec_start(vec_ptr v) {
    return v->data;
}

long int vec_length(vec_ptr v) {
    return v->len;
}
