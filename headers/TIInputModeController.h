
@interface TIInputModeController : NSObject {

    NSArray _supportedInputModeIdentifiers;
    NSArray _supportedInputModeLanguageAndRegions;
    NSString currentLocale;
    NSString currentLanguage;
    NSArray enabledInputModes;
    NSArray defaultInputModes;
}
@property (atomic, assign, readonly) NSArray* supportedInputModeIdentifiers;
@property (atomic, assign, readonly) NSArray* supportedInputModeLanguageAndRegions;
@property (atomic, assign, readonly) NSArray* enabledInputModeIdentifiers;
@property (nonatomic, copy, readwrite) NSString* currentLocale;
@property (nonatomic, copy, readwrite) NSString* currentLanguage;
@property (nonatomic, copy, readwrite) NSArray* enabledInputModes;
@property (nonatomic, copy, readwrite) NSArray* defaultInputModes;
 + (id) sharedInputModeController;
 + (id) _inputModesForLocale:(id)alanguage:(id)bmodeFetcher:(@?)c;

 - (void) dealloc;
 - (id) currentLocale;
 - (id) supportedInputModeLanguageAndRegions;
 - (id) supportedInputModeIdentifiers;
 - (id) enabledInputModeIdentifiers;
 - (void) setCurrentLocale:(id)a;
 - (void) setCurrentLanguage:(id)a;
 - (void) setEnabledInputModes:(id)a;
 - (void) setDefaultInputModes:(id)a;
 - (id) defaultInputModes;
 - (id) currentLanguage;
 - (id) defaultEnabledInputModesForCurrentLocale;
 - (id) enabledInputModes;


@end
