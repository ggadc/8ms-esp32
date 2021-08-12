/***
* author:xnby
* platform: esp
* version: 1.0.0
* UIResolution: 320*320
*/

#include "qm_ui_entry.h"
#include "lvgl/lvgl.h"

    /*
    * declear main_screen
    */
lv_obj_t * main_screen;
lv_obj_t * label_bf3a;
lv_obj_t * label_0d04;


LV_FONT_DECLARE(ali_font_16);


    void show_screen_main_screen();
    /*
    * keyboard
    */
    lv_obj_t * g_kb = NULL;

    static void g_kb_event_cb(lv_obj_t * event_kb, lv_event_t event)
    {
    /* Just call the regular event handler */
    if(event == LV_EVENT_APPLY) {
    lv_obj_set_hidden(event_kb, true);
    } else if(event == LV_EVENT_CANCEL) {
    lv_obj_set_hidden(event_kb, true);
    } else {
    lv_keyboard_def_event_cb(event_kb, event);
    }
    }
    static void g_create_kb_ifneeded() {
    if(g_kb == NULL) {
    g_kb = lv_keyboard_create(lv_scr_act(), NULL);
    lv_obj_set_pos(g_kb, 5, 90);
    lv_obj_set_event_cb(g_kb, g_kb_event_cb); /* Setting a custom event handler stops the keyboard from closing automatically */
    lv_obj_set_size(g_kb,  LV_HOR_RES - 10, 140);
    lv_keyboard_set_cursor_manage(g_kb, true); /* Automatically show/hide cursors on text areas */
    lv_obj_set_hidden(g_kb, true);
    }
    }
static void g_show_kb() 
{
    g_create_kb_ifneeded();
    lv_obj_set_parent(g_kb, lv_scr_act());
    lv_obj_set_hidden(g_kb, false);
    lv_obj_align(g_kb,NULL,LV_ALIGN_IN_BOTTOM_MID,0,0);
}
/*
    * declear codes
    */





/*
 * callback functions begins
 */
/*
 * callback functions ends
 */
    /*
    * init codes
    */
void init_function()
{
#ifdef BLOCKLY_init
    blockly_init();
#endif
    }

    void lv_8ms_label_bf3a_create()
{
	label_bf3a = lv_label_create(main_screen, NULL);
	lv_label_set_long_mode(label_bf3a,LV_LABEL_LONG_BREAK);
	lv_obj_set_size(label_bf3a, 100, 40);
//set label style
	lv_obj_set_style_local_text_font(label_bf3a,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);

	lv_label_set_text(label_bf3a, "Label");
	lv_label_set_align(label_bf3a, LV_LABEL_ALIGN_CENTER);
#ifdef BLOCKLY_label_bf3a_EVENT_HANDLER
	lv_obj_set_event_cb(label_bf3a, label_bf3a_event_handler);
#endif
	if(label_bf3a->coords.x2-label_bf3a->coords.x1<100)
	{
		int x_offset=(100-(label_bf3a->coords.x2-label_bf3a->coords.x1))/2;
		lv_obj_set_style_local_pad_left(label_bf3a,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(label_bf3a,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(label_bf3a->coords.y2-label_bf3a->coords.y1<40)
	{
		int y_offset=(40-(label_bf3a->coords.y2-label_bf3a->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(label_bf3a,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(label_bf3a,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
		lv_obj_set_pos(label_bf3a, 110, 205);

}
    void lv_8ms_label_0d04_create()
{
	label_0d04 = lv_label_create(main_screen, NULL);
	lv_label_set_long_mode(label_0d04,LV_LABEL_LONG_BREAK);
	lv_obj_set_size(label_0d04, 100, 40);
//set label style
	lv_obj_set_style_local_text_font(label_0d04,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,&ali_font_16);

	lv_label_set_text(label_0d04, "Label");
	lv_label_set_align(label_0d04, LV_LABEL_ALIGN_CENTER);
#ifdef BLOCKLY_label_0d04_EVENT_HANDLER
	lv_obj_set_event_cb(label_0d04, label_0d04_event_handler);
#endif
	if(label_0d04->coords.x2-label_0d04->coords.x1<100)
	{
		int x_offset=(100-(label_0d04->coords.x2-label_0d04->coords.x1))/2;
		lv_obj_set_style_local_pad_left(label_0d04,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
		lv_obj_set_style_local_pad_right(label_0d04,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,x_offset);
	}
	if(label_0d04->coords.y2-label_0d04->coords.y1<40)
	{
		int y_offset=(40-(label_0d04->coords.y2-label_0d04->coords.y1))/2;
		lv_obj_set_style_local_pad_bottom(label_0d04,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
		lv_obj_set_style_local_pad_top(label_0d04,LV_LABEL_PART_MAIN,LV_STATE_DEFAULT,y_offset);
	}
		lv_obj_set_pos(label_0d04, 110, 64);

}

void show_screen_main_screen()
{
        lv_scr_load(main_screen);
//生成动态页面的style
    
}

int screen_loop_enter = 0;
int _delay = 0;
void lv_qm_ui_loop(void)
{
    #ifdef BLOCKLY_loop
    blockly_loop();
    #endif
}

void lv_qm_ui_entry(void)
{
    
    /*
    * create screens
    */
    main_screen = lv_obj_create(NULL, NULL);
    
    lv_scr_load(main_screen);

//CREATE STATIC OBJ
    lv_8ms_label_bf3a_create();
    lv_8ms_label_0d04_create();
  
            static lv_style_t style_main_main_screen;
            lv_style_init(&style_main_main_screen);
            lv_style_set_bg_color(&style_main_main_screen,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xee, 0x0b, 0x0b));
            //lv_style_set_border_color(&style_main_main_screen,LV_STATE_DEFAULT,LV_COLOR_MAKE(0xee, 0x0b, 0x0b));
            lv_obj_add_style(main_screen,LV_CONT_PART_MAIN,&style_main_main_screen);

    init_function();
}