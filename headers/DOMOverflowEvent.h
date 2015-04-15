
@interface DOMOverflowEvent : DOMEvent {

}

 - (unsigned short) orient;
 - (BOOL) horizontalOverflow;
 - (BOOL) verticalOverflow;
 - (void) initOverflowEvent:(unsigned short)a horizontalOverflow:(BOOL)b verticalOverflow:(BOOL)c ;


@end
