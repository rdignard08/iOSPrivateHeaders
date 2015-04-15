
@interface DOMEvent : DOMObject {

}

 - (id) target;
 - (void) dealloc;
 - (void) finalize;
 - (void) setReturnValue:(BOOL)a ;
 - (unsigned long long) timeStamp;
 - (id) type;
 - (id) currentTarget;
 - (unsigned short) eventPhase;
 - (BOOL) bubbles;
 - (BOOL) cancelable;
 - (BOOL) defaultPrevented;
 - (id) srcElement;
 - (BOOL) returnValue;
 - (BOOL) cancelBubble;
 - (void) setCancelBubble:(BOOL)a ;
 - (void) stopPropagation;
 - (void) preventDefault;
 - (void) initEvent:(id)a canBubbleArg:(BOOL)b cancelableArg:(BOOL)c ;
 - (void) initEvent:(id)a ;
 - (void) stopImmediatePropagation;


@end
