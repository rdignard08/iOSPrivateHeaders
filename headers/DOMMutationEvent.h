
@interface DOMMutationEvent : DOMEvent {

}

 - (id) relatedNode;
 - (id) prevValue;
 - (id) newValue;
 - (id) attrName;
 - (unsigned short) attrChange;
 - (void) initMutationEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c relatedNode:(id)d prevValue:(id)e newValue:(id)f attrName:(id)g attrChange:(unsigned short)h ;
 - (void) initMutationEvent:(id)a ;


@end
