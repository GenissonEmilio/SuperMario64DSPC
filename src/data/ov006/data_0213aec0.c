/* .data 0x0213aec0..0x0213af18 */
extern unsigned char FlowerFace_StateIdle[];
extern unsigned char FlowerFace_StateReactA[];
extern unsigned char FlowerFace_StateReactB[];
extern unsigned char FlowerFace_StateReact[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int pmf_FlowerFace_StateIdle_2[2] = {
    (unsigned int)&FlowerFace_StateIdle, 0
};

unsigned int pmf_FlowerFace_StateReactA[2] = {
    (unsigned int)&FlowerFace_StateReactA, 0
};

unsigned int pmf_FlowerFace_StateReactB[2] = {
    (unsigned int)&FlowerFace_StateReactB, 0
};

unsigned int pmf_FlowerFace_StateReact[2] = {
    (unsigned int)&FlowerFace_StateReact, 0
};

unsigned int pmf_FlowerFace_StateIdle[2] = {
    (unsigned int)&FlowerFace_StateIdle, 0
};

extern unsigned char data_ov006_0213aee8[48] ;
#pragma section forcedata end
#pragma pop
