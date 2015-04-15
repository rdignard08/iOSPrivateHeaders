
@interface DOMEvent : DOMObject {

}

 - (id) target;
 - (void) dealloc;
 - (void) finalize;
 - (void) setReturnValue:(BOOL)a;
 - (Q) timeStamp;
 - (id) type;
 - (id) currentTarget;
 - (S) eventPhase;
 - (BOOL) bubbles;
 - (BOOL) cancelable;
 - (BOOL) defaultPrevented;
 - (id) srcElement;
 - (BOOL) returnValue;
 - (BOOL) cancelBubble;
 - (void) setCancelBubble:(BOOL)a;
 - (void) stopPropagation;
 - (void) preventDefault;
 - (void) initEvent:(id)acanBubbleArg:(BOOL)bcancelableArg:(BOOL)c;
 - (void) initEvent:(id)a;
 - (void) stopImmediatePropagation;


@end
