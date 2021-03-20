# REBMATRIX effects 中英文对照

```c
enum rgb_matrix_effects {
RGB_MATRIX_NONE = 0,
RGB_MATRIX_SOLID_COLOR = 1, // Static single hue, no speed support静态单色调无速度支持
RGB_MATRIX_ALPHAS_MODS, // Static dual hue, speed is hue for secondary hue静态双重色调速度为次要色调
RGB_MATRIX_GRADIENT_UP_DOWN, // Static gradient top to bottom, speed controls how much gradient changes静态渐变从上到下速度控制渐变量
RGB_MATRIX_GRADIENT_LEFT_RIGHT, // Static gradient left to right, speed controls how much gradient changes静态梯度从左到右速度控制梯度的变化量
RGB_MATRIX_BREATHING, // Single hue brightness cycling animation单色调亮度循环动画
RGB_MATRIX_BAND_SAT, // Single hue band fading saturation scrolling left to right左色调向右滚动单个色相带衰减饱和度
RGB_MATRIX_BAND_VAL, // Single hue band fading brightness scrolling left to right单个色相带衰减亮度从左向右滚动
RGB_MATRIX_BAND_PINWHEEL_SAT, // Single hue 3 blade spinning pinwheel fades saturation单色调3叶片旋转风车褪色饱和度
RGB_MATRIX_BAND_PINWHEEL_VAL, // Single hue 3 blade spinning pinwheel fades brightness单色调3叶片旋转风车减弱亮度
RGB_MATRIX_BAND_SPIRAL_SAT, // Single hue spinning spiral fades saturation单色调旋转螺旋褪色饱和度
RGB_MATRIX_BAND_SPIRAL_VAL, // Single hue spinning spiral fades brightness单色调旋转螺旋淡出亮度
RGB_MATRIX_CYCLE_ALL, // Full keyboard solid hue cycling through full gradient全键盘纯色在整个渐变中循环
RGB_MATRIX_CYCLE_LEFT_RIGHT, // Full gradient scrolling left to right从左到右全梯度滚动
RGB_MATRIX_CYCLE_UP_DOWN, // Full gradient scrolling top to bottom全梯度从上到下滚动
RGB_MATRIX_CYCLE_OUT_IN, // Full gradient scrolling out to in全梯度滚动到
RGB_MATRIX_CYCLE_OUT_IN_DUAL, // Full dual gradients scrolling out to in全双梯度滚动到
RGB_MATRIX_RAINBOW_MOVING_CHEVRON, // Full gradent Chevron shapped scrolling left to right全渐变雪佛龙形从左到右滚动
RGB_MATRIX_CYCLE_PINWHEEL, // Full gradient spinning pinwheel around center of keyboard围绕键盘中心的全梯度旋转风车
RGB_MATRIX_CYCLE_SPIRAL, // Full gradient spinning spiral around center of keyboard围绕键盘中心的全梯度旋转螺旋
RGB_MATRIX_DUAL_BEACON, // Full gradient spinning around center of keyboard全梯度围绕键盘中心旋转
RGB_MATRIX_RAINBOW_BEACON, // Full tighter gradient spinning around center of keyboard围绕键盘中心的旋转更加紧密
RGB_MATRIX_RAINBOW_PINWHEELS, // Full dual gradients spinning two halfs of keyboard全双梯度旋转两半键盘
RGB_MATRIX_RAINDROPS, // Randomly changes a single key's hue随机更改单个键的色调
RGB_MATRIX_JELLYBEAN_RAINDROPS, // Randomly changes a single key's hue and saturation随机更改单个键的色相和饱和度
#if define(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
RGB_MATRIX_TYPING_HEATMAP, // How hot is your WPM!您的WPM有多热
RGB_MATRIX_DIGITAL_RAIN, // That famous computer simulation那著名的计算机模拟
#endif
#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
RGB_MATRIX_SOLID_REACTIVE_SIMPLE, // Pulses keys hit to hue & value then fades value out脉冲键击中色相和值然后淡出值
RGB_MATRIX_SOLID_REACTIVE, // Static single hue, pulses keys hit to shifted hue then fades to current hue静态单一色相脉冲键敲击以改变色相然后淡出为当前色相
RGB_MATRIX_SOLID_REACTIVE_WIDE // Hue & value pulse near a single key hit then fades value out一次按键时的色相和数值脉冲然后淡出数值
RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE // Hue & value pulse near multiple key hits then fades value out多次击键时的色相和数值脉冲然后淡出数值
RGB_MATRIX_SOLID_REACTIVE_CROSS // Hue & value pulse the same column and row of a single key hit then fades value out色相和值在一次击键时以相同的列和行脉冲然后淡出值
RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out色相和值在多个击键的相同列和行上脉冲然后淡出值
RGB_MATRIX_SOLID_REACTIVE_NEXUS // Hue & value pulse away on the same column and row of a single key hit then fades value out色相和数值在一次击键的同一列和同一行上消失然后淡出数值
RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out色相和值在多个击键的同一列和同一行上消失然后淡出值
RGB_MATRIX_SPLASH, // Full gradient & value pulse away from a single key hit then fades value out完整的梯度和数值脉冲远离单个按键然后淡出数值
RGB_MATRIX_MULTISPLASH, // Full gradient & value pulse away from multiple key hits then fades value out完整的渐变和价值脉冲远离多个击键然后淡出价值
RGB_MATRIX_SOLID_SPLASH, // Hue & value pulse away from a single key hit then fades value out色相和价值脉冲远离单个击键然后淡出价值
RGB_MATRIX_SOLID_MULTISPLASH, // Hue & value pulse away from multiple key hits then fades value out色相和价值脉冲远离多个击键然后淡出价值
#endif
RGB_MATRIX_EFFECT_MAX
};
```
