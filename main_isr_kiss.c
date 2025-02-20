#include "asf.h"

volatile int g_cnt = 0;

void btn_callback(void) {
    g_cnt++;
    if (g_cnt > 8)
        g_cnt = 0;
}

void main(void) {
    int i;
    char g_str[10];
    
    while (1) {
        if (g_cnt > 0) {
            for (i = 0; i < g_cnt; i++) {
                g_str[i] = '*';
            }
            g_str[i] = '\0';
            gfx_mono_draw_string(g_str, 0, 0, &sysfont);
        }
   
