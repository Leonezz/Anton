# REBMATRIX effects ��Ӣ�Ķ���

```c
enum rgb_matrix_effects {
RGB_MATRIX_NONE = 0,
RGB_MATRIX_SOLID_COLOR = 1, // Static single hue, no speed support��̬��ɫ�����ٶ�֧��
RGB_MATRIX_ALPHAS_MODS, // Static dual hue, speed is hue for secondary hue��̬˫��ɫ���ٶ�Ϊ��Ҫɫ��
RGB_MATRIX_GRADIENT_UP_DOWN, // Static gradient top to bottom, speed controls how much gradient changes��̬������ϵ����ٶȿ��ƽ�����
RGB_MATRIX_GRADIENT_LEFT_RIGHT, // Static gradient left to right, speed controls how much gradient changes��̬�ݶȴ������ٶȿ����ݶȵı仯��
RGB_MATRIX_BREATHING, // Single hue brightness cycling animation��ɫ������ѭ������
RGB_MATRIX_BAND_SAT, // Single hue band fading saturation scrolling left to right��ɫ�����ҹ�������ɫ���˥�����Ͷ�
RGB_MATRIX_BAND_VAL, // Single hue band fading brightness scrolling left to right����ɫ���˥�����ȴ������ҹ���
RGB_MATRIX_BAND_PINWHEEL_SAT, // Single hue 3 blade spinning pinwheel fades saturation��ɫ��3ҶƬ��ת�糵��ɫ���Ͷ�
RGB_MATRIX_BAND_PINWHEEL_VAL, // Single hue 3 blade spinning pinwheel fades brightness��ɫ��3ҶƬ��ת�糵��������
RGB_MATRIX_BAND_SPIRAL_SAT, // Single hue spinning spiral fades saturation��ɫ����ת������ɫ���Ͷ�
RGB_MATRIX_BAND_SPIRAL_VAL, // Single hue spinning spiral fades brightness��ɫ����ת������������
RGB_MATRIX_CYCLE_ALL, // Full keyboard solid hue cycling through full gradientȫ���̴�ɫ������������ѭ��
RGB_MATRIX_CYCLE_LEFT_RIGHT, // Full gradient scrolling left to right������ȫ�ݶȹ���
RGB_MATRIX_CYCLE_UP_DOWN, // Full gradient scrolling top to bottomȫ�ݶȴ��ϵ��¹���
RGB_MATRIX_CYCLE_OUT_IN, // Full gradient scrolling out to inȫ�ݶȹ�����
RGB_MATRIX_CYCLE_OUT_IN_DUAL, // Full dual gradients scrolling out to inȫ˫�ݶȹ�����
RGB_MATRIX_RAINBOW_MOVING_CHEVRON, // Full gradent Chevron shapped scrolling left to rightȫ����ѩ�����δ����ҹ���
RGB_MATRIX_CYCLE_PINWHEEL, // Full gradient spinning pinwheel around center of keyboardΧ�Ƽ������ĵ�ȫ�ݶ���ת�糵
RGB_MATRIX_CYCLE_SPIRAL, // Full gradient spinning spiral around center of keyboardΧ�Ƽ������ĵ�ȫ�ݶ���ת����
RGB_MATRIX_DUAL_BEACON, // Full gradient spinning around center of keyboardȫ�ݶ�Χ�Ƽ���������ת
RGB_MATRIX_RAINBOW_BEACON, // Full tighter gradient spinning around center of keyboardΧ�Ƽ������ĵ���ת���ӽ���
RGB_MATRIX_RAINBOW_PINWHEELS, // Full dual gradients spinning two halfs of keyboardȫ˫�ݶ���ת�������
RGB_MATRIX_RAINDROPS, // Randomly changes a single key's hue������ĵ�������ɫ��
RGB_MATRIX_JELLYBEAN_RAINDROPS, // Randomly changes a single key's hue and saturation������ĵ�������ɫ��ͱ��Ͷ�
#if define(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
RGB_MATRIX_TYPING_HEATMAP, // How hot is your WPM!����WPM�ж���
RGB_MATRIX_DIGITAL_RAIN, // That famous computer simulation�������ļ����ģ��
#endif
#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
RGB_MATRIX_SOLID_REACTIVE_SIMPLE, // Pulses keys hit to hue & value then fades value out���������ɫ���ֵȻ�󵭳�ֵ
RGB_MATRIX_SOLID_REACTIVE, // Static single hue, pulses keys hit to shifted hue then fades to current hue��̬��һɫ��������û��Ըı�ɫ��Ȼ�󵭳�Ϊ��ǰɫ��
RGB_MATRIX_SOLID_REACTIVE_WIDE // Hue & value pulse near a single key hit then fades value outһ�ΰ���ʱ��ɫ�����ֵ����Ȼ�󵭳���ֵ
RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE // Hue & value pulse near multiple key hits then fades value out��λ���ʱ��ɫ�����ֵ����Ȼ�󵭳���ֵ
RGB_MATRIX_SOLID_REACTIVE_CROSS // Hue & value pulse the same column and row of a single key hit then fades value outɫ���ֵ��һ�λ���ʱ����ͬ���к�������Ȼ�󵭳�ֵ
RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value outɫ���ֵ�ڶ����������ͬ�к���������Ȼ�󵭳�ֵ
RGB_MATRIX_SOLID_REACTIVE_NEXUS // Hue & value pulse away on the same column and row of a single key hit then fades value outɫ�����ֵ��һ�λ�����ͬһ�к�ͬһ������ʧȻ�󵭳���ֵ
RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value outɫ���ֵ�ڶ��������ͬһ�к�ͬһ������ʧȻ�󵭳�ֵ
RGB_MATRIX_SPLASH, // Full gradient & value pulse away from a single key hit then fades value out�������ݶȺ���ֵ����Զ�뵥������Ȼ�󵭳���ֵ
RGB_MATRIX_MULTISPLASH, // Full gradient & value pulse away from multiple key hits then fades value out�����Ľ���ͼ�ֵ����Զ��������Ȼ�󵭳���ֵ
RGB_MATRIX_SOLID_SPLASH, // Hue & value pulse away from a single key hit then fades value outɫ��ͼ�ֵ����Զ�뵥������Ȼ�󵭳���ֵ
RGB_MATRIX_SOLID_MULTISPLASH, // Hue & value pulse away from multiple key hits then fades value outɫ��ͼ�ֵ����Զ��������Ȼ�󵭳���ֵ
#endif
RGB_MATRIX_EFFECT_MAX
};
```
