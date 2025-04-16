//
// Created by Siona Gruverman on 4/16/25.
//

#include "conversion.h"
float celsiusToFahrenheit(float temp) {
    return (temp * 9 / 5) + 32;
}
float fahrenheitToCelsius(float temp) {
    return (temp - 32) * 5 / 9;
}
float inchesToCentimeters(float num) {
    return (num * 2.54);
}
float centimetersToInches(float num) {
    return (num / 2.54);
}
