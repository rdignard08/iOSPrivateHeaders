
@interface DOMMessageEvent : DOMEvent {

}

 - (id) data;
 - (id) origin;
 - (id) source;
 - (id) lastEventId;
 - (id) messagePort;
 - (void) initMessageEvent:(id)a canBubbleArg:(BOOL)b cancelableArg:(BOOL)c dataArg:(id)d originArg:(id)e lastEventIdArg:(id)f sourceArg:(id)g messagePort:(id)h ;


@end
