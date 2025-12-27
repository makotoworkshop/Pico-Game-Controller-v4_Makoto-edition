/**
 * Color cycle effect
 * @author SpeedyPotato
 **/
// void ws2812b_color_simple(uint32_t counter) {
//   for (int i = 0; i < WS2812B_LED_SIZE; ++i) {
//     put_pixel(color_wheel((counter + i * (int)(768 / WS2812B_LED_SIZE)) % 768));
//   }
// }

void ws2812b_color_64(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(64)); 
  }
}
void ws2812b_color_128(uint32_t counter) {  // JAUNE
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(128)); 
  }
}
void ws2812b_color_192(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(192)); 
  }
}
void ws2812b_color_256(uint32_t counter) {  // ROUGE
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(256)); 
  }
}
void ws2812b_color_320(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(320)); 
  }
}
void ws2812b_color_384(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(384)); 
  }
}
void ws2812b_color_448(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(448)); 
  }
}
void ws2812b_color_512(uint32_t counter) {  // BLEU
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(512)); 
  }
}
void ws2812b_color_576(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(576)); 
  }
}
void ws2812b_color_640(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(640)); 
  }
}
void ws2812b_color_704(uint32_t counter) {
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(704)); 
  }
}
void ws2812b_color_768(uint32_t counter) {   // VERT
  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
    put_pixel(color_wheel(768)); 
  }
}
// 64 128(jaune) 192 256(rouge) 320 384 448 512(bleu) 576 640 704 768=0(vert)
//  for (int i = 0; i < WS2812B_LED_SIZE; ++i) {  // balaye toutes les leds
//    put_pixel(color_wheel(256)); 
//  }

// rouge = 256
// vert = 768 ou 0
// bleu = 512 

// jaune = 128

// 768 remplacé par 13 à donné du vert…
// avec 300 le caroussel est très saccadé et ne va que du vert au jaune et au rouge
// utilise la roue de couleur définie dans le fichier ws2812b_util.c