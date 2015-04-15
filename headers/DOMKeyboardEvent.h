
@interface DOMKeyboardEvent : DOMUIEvent {

}

 - (I) location;
 - (BOOL) ctrlKey;
 - (BOOL) shiftKey;
 - (BOOL) altKey;
 - (BOOL) metaKey;
 - (id) keyIdentifier;
 - (I) keyLocation;
 - (BOOL) altGraphKey;
 - (i) keyCode;
 - (i) charCode;
 - (BOOL) getModifierState:(id)a;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)elocation:(I)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)jaltGraphKey:(BOOL)k;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)elocation:(I)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)j;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)ekeyLocation:(I)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)jaltGraphKey:(BOOL)k;
 - (void) initKeyboardEvent:(id)acanBubble:(BOOL)bcancelable:(BOOL)cview:(id)dkeyIdentifier:(id)ekeyLocation:(I)fctrlKey:(BOOL)galtKey:(BOOL)hshiftKey:(BOOL)imetaKey:(BOOL)j;


@end
