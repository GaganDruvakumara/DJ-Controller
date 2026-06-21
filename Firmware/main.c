//there's a lot of skeleton code because I've never done stuff like this before & it's basically impossible to do without a prototype, but this should set up the basic structure of the code

#include <stdio.h>
#include "./pico/stdlib.h"
#include "definitions.h"

int LPadState[2][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
int RPadState[2][5] = {{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}};
int DSSWState[2] = {0, 0};
int lightStatesL[5][3] = {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, 
                          {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};
int lightStatesR[5][3] = {{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, 
                          {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}, {0, 0, 0}}};

int jogPositions[2] = {0, 0}; // I don't know how to store encoder positions yet, so this is a placeholder for now
int REPositions[2] = {0, 0};


void init() {
    gpio_set_direction(Pad1INT, GPIO_IN);
    gpio_set_direction(Pad2INT, GPIO_IN);
    gpio_set_direction(MainExpINT, GPIO_IN);
    adc_gpio_init(COM1);
    adc_gpio_init(COM2);
    // initialize I2C stuff
}

void pollExpanders(int address) {
    // This function should read the state of the expanders and update LPadState and RPadState accordingly
}

void pollMuxes() {
    // This function should read the state of the multiplexers and return pot values
    for (int i = 0; i < 16; i++) {
        int emptyAdress = 0;
        //set mux address
        if(emptyAdress!=0){
            adc_set_input(COM1);
            adc_read(COM1);
            adc_set_input(COM2);
            adc_read(COM2);
        }
        //update midi values based on pot values
    }
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

void pollRE() {
    // This function should read the state of the rotary encoders and update REPositions accordingly
}

void processAudioInputs() {
    // This function should process audio inputs
}

void GetDJAudio() {
    // This function should get the the audio from the DJ software so that it can be processed and sent to the master output and phones output
}

void processMasterOut() {
    // This function should process the master output
}

void processPhonesOut() {
    // This function should process the phones output
}

void updateMidi() {
    // This function should process the midi output
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
    pollMuxes();
    if (updateLightStates(placeholder)) {
        updateLights(placeholder);
    }
    if(gpio_get(DSSW2) != DSSWState[0] || gpio_get(DSSW4) != DSSWState[1]) {
        DSSWState[0] = gpio_get(DSSW2);
        DSSWState[1] = gpio_get(DSSW4);
    }
    pollJog();
    pollRE();
    processAudioInputs();
    updateMidi();
    GetDJAudio();
    processMasterOut();
    processPhonesOut();
}
