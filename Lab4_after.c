#define segment1_val     portd   //ones
#define segment2_val    portc   //tens
#define enable_walk     portb.b0
#define red_green       portb.b1
#define yellow          portb.b2
#define walk_traffic    portb.b3
#define start           portb.b4
#define red_green2      portb.b5
void interrupt()
{
    if(intcon.intf==1)
    {
    int previous_yellow=yellow;
    int previous_red_green=red_green;
    int previous_red_green2=red_green2;
    int previous_segment1_val=segment1_val;
    int previous_segment2_val=segment2_val;
        int j;
        intcon.intf = 0;
        red_green=0;
        red_green2=0;
        yellow = 0;
        walk_traffic=1;
        for (j = 5; j >= 0;j--)
        {
            segment1_val = j;
            delay_ms(1000);
        }
        walk_traffic=0;
        yellow=previous_yellow;
        red_green=previous_red_green;
        red_green2=previous_red_green2;
        segment1_val = previous_segment1_val;
        segment2_val = previous_segment2_val;
    }

}
void flashing_segment()
{
    int i;
    segment2_val = 1;
    segment1_val = 0;
    delay_ms(1000);
    segment2_val = 0;
    for (i = 9; i >= 0;i--)
        {
            if(i==3)
            {
                yellow = 1;
            }
            segment1_val = i;
            delay_ms(1000);
        }
        yellow = 0;
}
void main()
{
    trisd = 0;
    trisb = 0b00010001;
    trisc = 0;
    portb = 0;
    portd = 0;
    portc = 0;
    intcon.inte = 1;
    intcon.gie = 1;
    option_reg.intedg = 1;
    walk_traffic = 0;
    while(start==0) ;
    while (1)
    {
        red_green = 0;
        red_green2 = 1;
        flashing_segment();
        red_green = 1;
        red_green2 = 0;
        flashing_segment();
    }

}