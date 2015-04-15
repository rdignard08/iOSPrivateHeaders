
@interface DOMMutationEvent : DOMEvent {

}

 - (id) relatedNode;
 - (id) prevValue;
 - (id) newValue;
 - (id) attrName;
 - (unsigned short) attrChange;
 - (void) initMutationEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)crelatedNode:(id)dprevValue:(id)enewValue:(id)fattrName:(id)gattrChange:(unsigned short)h;
 - (void) initMutationEvent:(id)a;


@end
