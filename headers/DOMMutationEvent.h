
@interface DOMMutationEvent : DOMEvent {

}

 - (id) relatedNode;
 - (id) prevValue;
 - (id) newValue;
 - (id) attrName;
 - (S) attrChange;
 - (void) initMutationEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)crelatedNode:(id)dprevValue:(id)enewValue:(id)fattrName:(id)gattrChange:(S)h;
 - (void) initMutationEvent:(id)a;


@end
