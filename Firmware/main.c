#include <stdio.h>
#include "pico/stdlib.h"
#include "definitions.h"

int LPadState[2][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
int RPadState[2][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
int DSSWState[2] = {0, 0};
int lightStatesL[5][3] = {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, 
                          {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};
int lightStatesR[5][3] = {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, 
                          {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};


void init() {
    gpio_set_direction(Pad1INT, GPIO_IN);
    gpio_set_direction(Pad2INT, GPIO_IN);
    gpio_set_direction(MainExpINT, GPIO_IN);
}

void pollExpanders(int address) {
    // This function should read the state of the expanders and update LPadState and RPadState accordingly
}

void pollMuxes(int address) {
    // This function should read the state of the multiplexers and return pot values
}

void updateLightStates() {
    // This function should update the light states based on the current state of the pads and switches and return true if any light state has changed, false otherwise
}

void updateLights() {
    // This function should update the lights based on the current light states
}

void pollJog() {
    // This function should read the state of the jogs and update LPadState and RPadState accordingly
}



int main() {
    int placeholder = 0;
    stdio_init_all();
    init();
    while (true) {
        if (gpio_get(Pad1INT)) {
            pollExpanders(placeholder);
        }
        if (gpio_get(Pad2INT)) {
            pollExpanders(placeholder);
        }
        if (gpio_get(MainExpINT)) {
            pollExpanders(placeholder);
        }
    }
    pollMuxes(placeholder);
    pollMuxes(placeholder); // poling 2nd mux
    if (updateLightStates(placeholder)) {
        updateLights(placeholder);
    }
    if(gpio_get(DSSW2) != DSSWState[0] || gpio_get(DSSW4) != DSSWState[1]) {
        DSSWState[0] = gpio_get(DSSW2);
        DSSWState[1] = gpio_get(DSSW4);
    }
}
