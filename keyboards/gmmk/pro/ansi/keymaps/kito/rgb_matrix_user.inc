
RGB_MATRIX_EFFECT(HUTAO_COLORS)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS


static uint16_t HUTAO_timers = 0;

// static int CurrentColorIndex = 0;


typedef struct {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} CUSTOM_COLOR;

static CUSTOM_COLOR HUTAO_keyboard_state[DRIVER_LED_TOTAL];

static const CUSTOM_COLOR SELECTABLE_COLORS[3] = {
	{251, 251, 119},
	{255, 166,  56},
	{214,  76,  47},
};

static bool HUTAO_COLORS(effect_params_t* params) {
	RGB_MATRIX_USE_LIMITS(led_min, led_max);



	if (timer_elapsed(HUTAO_timers) > 100) {
		for (int i = 0; i < DRIVER_LED_TOTAL; ++i) {
			int selection = rand() % 3;
			HUTAO_keyboard_state[i] = SELECTABLE_COLORS[selection];
		}
		HUTAO_timers = timer_read();
	}

	for (uint8_t i = led_min; i < led_max; i++) {
		rgb_matrix_set_color(i, 
			SELECTABLE_COLORS[i - led_min].r,
			SELECTABLE_COLORS[i - led_min].g,
			SELECTABLE_COLORS[i - led_min].b);
	}

	return led_max < DRIVER_LED_TOTAL;
}

#endif
