
@interface DOMTouchEvent : DOMUIEvent {

}

 - (f) scale;
 - (id) touches;
 - (f) rotation;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (id) targetTouches;
 - (id) changedTouches;
 - (void) initTouchEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(i)escreenX:(i)fscreenY:(i)gclientX:(i)hclientY:(i)ictrlKey:(BOOL)jaltKey:(BOOL)kshiftKey:(BOOL)lmetaKey:(BOOL)mtouches:(id)ntargetTouches:(id)ochangedTouches:(id)pscale:(f)qrotation:(f)r;


@end
