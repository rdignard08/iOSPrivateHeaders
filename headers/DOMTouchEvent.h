
@interface DOMTouchEvent : DOMUIEvent {

}

 - (float) scale;
 - (id) touches;
 - (float) rotation;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (id) targetTouches;
 - (id) changedTouches;
 - (void) initTouchEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(int)escreenX:(int)fscreenY:(int)gclientX:(int)hclientY:(int)ictrlKey:(BOOL)jaltKey:(BOOL)kshiftKey:(BOOL)lmetaKey:(BOOL)mtouches:(id)ntargetTouches:(id)ochangedTouches:(id)pscale:(float)qrotation:(float)r;


@end
