
@protocol NSCopying;
@interface UIKeyboardInputMode : UITextInputMode <NSCopying> {

    BOOL isDisplayed;
    NSString* primaryLanguage;
    NSString* languageWithRegion;
    NSString* identifier;
    NSString* normalizedIdentifier;
    NSString* softwareLayout;
    NSString* hardwareLayout;
}
 + (id) keyboardInputModeWithIdentifier:(id)a;
 + (id) dictationInputMode;
 + (id) intlInputMode;
 + (id) canonicalLanguageIdentifierFromIdentifier:(id)a;
 + (id) softwareLayoutFromIdentifier:(id)a;
 + (id) hardwareLayoutFromIdentifier:(id)a;

 - (id) containingBundle;
 - (id) displayName;
 - (id) copyWithZone:(^{_NSZone=})a ;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a ;
 - (id) initWithIdentifier:(id)a ;
 - (id) hardwareLayout;
 - (id) extension;
 - (BOOL) isExtensionInputMode;
 - (id) identifierWithLayouts;
 - (BOOL) isDisplayed;
 - (id) primaryLanguage;
 - (BOOL) isDefaultRightToLeft;
 - (BOOL) isAllowedForTraits:(id)a ;
 - (BOOL) defaultLayoutIsASCIICapable;
 - (void) setPrimaryLanguage:(id)a ;
 - (BOOL) isDesiredForTraits:(id)a forceASCIICapable:(BOOL)b ;
 - (id) normalizedIdentifier;
 - (id) languageWithRegion;
 - (void) setNormalizedIdentifier:(id)a ;
 - (void) setLanguageWithRegion:(id)a ;
 - (void) setSoftwareLayout:(id)a ;
 - (void) setHardwareLayout:(id)a ;
 - (id) normalizedIdentifierLevels;
 - (id) extendedDisplayName;
 - (id) containingBundleDisplayName;
 - (id) softwareLayout;
 - (void) setIsDisplayed:(BOOL)a ;
 - (void) encodeWithCoder:(id)a ;
 - (id) initWithCoder:(id)a ;
 - (id) identifier;
 - (void) setIdentifier:(id)a ;


@end
