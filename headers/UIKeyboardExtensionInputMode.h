
@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode {

    NSExtension* _extension;
}

 - (id) containingBundle;
 - (id) displayName;
 - (void) dealloc;
 - (id) initWithIdentifier:(id)a ;
 - (id) hardwareLayout;
 - (void) setExtension:(id)a ;
 - (id) extension;
 - (BOOL) isExtensionInputMode;
 - (id) identifierWithLayouts;
 - (BOOL) isDefaultRightToLeft;
 - (BOOL) isAllowedForTraits:(id)a ;
 - (BOOL) defaultLayoutIsASCIICapable;
 - (BOOL) isDesiredForTraits:(id)a forceASCIICapable:(BOOL)b ;
 - (id) normalizedIdentifierLevels;
 - (id) extendedDisplayName;
 - (id) containingBundleDisplayName;


@end
