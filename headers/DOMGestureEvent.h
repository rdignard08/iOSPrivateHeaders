
@interface DOMGestureEvent : DOMUIEvent {

}

 - (id) target;
 - (float) scale;
 - (float) rotation;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (void) initGestureEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)ddetail:(int)escreenX:(int)fscreenY:(int)gclientX:(int)hclientY:(int)ictrlKey:(BOOL)jaltKey:(BOOL)kshiftKey:(BOOL)lmetaKey:(BOOL)mtarget:(id)nscale:(float)orotation:(float)p;


@end
