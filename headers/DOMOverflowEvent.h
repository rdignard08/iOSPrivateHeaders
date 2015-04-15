
@interface DOMOverflowEvent : DOMEvent {

}

 - (unsigned short) orient;
 - (BOOL) horizontalOverflow;
 - (BOOL) verticalOverflow;
 - (void) initOverflowEvent:(unsigned short)ahorizontalOverflow:(BOOL)bverticalOverflow:(BOOL)c;


@end
