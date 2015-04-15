
@interface DOMOverflowEvent : DOMEvent {

}

 - (S) orient;
 - (BOOL) horizontalOverflow;
 - (BOOL) verticalOverflow;
 - (void) initOverflowEvent:(S)ahorizontalOverflow:(BOOL)bverticalOverflow:(BOOL)c;


@end
