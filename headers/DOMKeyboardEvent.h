
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
 - (BOOL) getModifierState:(id)a;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)elocation:(unsigned int)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)jaltGraphKey:(BOOL)k;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)elocation:(unsigned int)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)j;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)ekeyLocation:(unsigned int)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)jaltGraphKey:(BOOL)k;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)ekeyLocation:(unsigned int)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)j;


@end
