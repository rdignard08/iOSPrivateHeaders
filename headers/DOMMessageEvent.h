
@interface DOMMessageEvent : DOMEvent {

}

 - (id) data;
 - (id) origin;
 - (id) source;
 - (id) lastEventId;
 - (id) messagePort;
 - (void) initMessageEvent:(id)acanBubbleArg:(BOOL)bcancelableArg:(BOOL)cdataArg:(id)doriginArg:(id)elastEventIdArg:(id)fsourceArg:(id)gmessagePort:(id)h;


@end
