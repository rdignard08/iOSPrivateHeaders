
@interface DOMKeyboardEvent : DOMUIEvent {

}

 - (unsigned int) location;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (id) keyIdentifier;
 - (unsigned int) keyLocation;
 - (BOOL) altGraphKey;
 - (int) keyCode;
 - (int) charCode;
 - (BOOL) getModifierState:(id)a ;
 - (void) initKeyboardEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d keyIdentifier:(id)e location:(unsigned int)f ctrlKey:(BOOL)g altKey:(BOOL)h shiftKey:(BOOL)i metaKey:(BOOL)j altGraphKey:(BOOL)k ;
 - (void) initKeyboardEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d keyIdentifier:(id)e location:(unsigned int)f ctrlKey:(BOOL)g altKey:(BOOL)h shiftKey:(BOOL)i metaKey:(BOOL)j ;
 - (void) initKeyboardEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d keyIdentifier:(id)e keyLocation:(unsigned int)f ctrlKey:(BOOL)g altKey:(BOOL)h shiftKey:(BOOL)i metaKey:(BOOL)j altGraphKey:(BOOL)k ;
 - (void) initKeyboardEvent:(id)a canBubble:(BOOL)b cancelable:(BOOL)c view:(id)d keyIdentifier:(id)e keyLocation:(unsigned int)f ctrlKey:(BOOL)g altKey:(BOOL)h shiftKey:(BOOL)i metaKey:(BOOL)j ;


@end
