/* .data 0x02087574..0x0208757c */
extern unsigned char data_02088460[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_02087574[2] = {
    9, (unsigned int)&data_02088460
};
#pragma section forcedata end
#pragma pop
