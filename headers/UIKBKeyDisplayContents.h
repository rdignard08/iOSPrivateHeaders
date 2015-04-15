
@interface UIKBKeyDisplayContents : NSObject {

    BOOL _isCustomGlyph;
    BOOL _secondaryIsCustomGlyph;
    BOOL _fillPath;
    BOOL _force1xImages;
    BOOL _stringKeycapOverImage;
    NSString* _displayString;
    NSString* _displayStringImage;
    NSString* _secondaryDisplayStringImage;
    NSString* _secondaryDisplayString;
    NSArray* _variantDisplayContents;
    NSArray* _highlightedVariantsList;
    long long _displayPathType;
    UIKBKeyDisplayContents* _fallbackContents;
}
@property (nonatomic, retain, readwrite) NSString* displayString;
@property (nonatomic, retain, readwrite) NSString* displayStringImage;
@property (nonatomic, retain, readwrite) NSString* secondaryDisplayStringImage;
@property (nonatomic, assign, readwrite) NSNumber* isCustomGlyph;
@property (nonatomic, retain, readwrite) NSString* secondaryDisplayString;
@property (nonatomic, assign, readwrite) NSNumber* secondaryIsCustomGlyph;
@property (nonatomic, retain, readwrite) NSArray* variantDisplayContents;
@property (nonatomic, retain, readwrite) NSArray* highlightedVariantsList;
@property (nonatomic, assign, readwrite) NSNumber* displayPathType;
@property (nonatomic, assign, readwrite) NSNumber* fillPath;
@property (nonatomic, assign, readwrite) NSNumber* force1xImages;
@property (nonatomic, assign, readwrite) NSNumber* stringKeycapOverImage;
@property (nonatomic, retain, readwrite) UIKBKeyDisplayContents* fallbackContents;
 + (id) displayContents;

 - (id) description;
 - (void) dealloc;
 - (void) setDisplayString:(id)a ;
 - (void) setVariantDisplayContents:(id)a ;
 - (void) setHighlightedVariantsList:(id)a ;
 - (void) setDisplayPathType:(long long)a ;
 - (void) setDisplayStringImage:(id)a ;
 - (void) setSecondaryDisplayStringImage:(id)a ;
 - (void) setIsCustomGlyph:(BOOL)a ;
 - (id) secondaryDisplayString;
 - (id) highlightedVariantsList;
 - (id) displayStringImage;
 - (void) setForce1xImages:(BOOL)a ;
 - (BOOL) isCustomGlyph;
 - (BOOL) secondaryIsCustomGlyph;
 - (id) variantDisplayContents;
 - (long long) displayPathType;
 - (BOOL) fillPath;
 - (BOOL) force1xImages;
 - (id) fallbackContents;
 - (BOOL) stringKeycapOverImage;
 - (id) secondaryDisplayStringImage;
 - (void) setSecondaryDisplayString:(id)a ;
 - (void) setSecondaryIsCustomGlyph:(BOOL)a ;
 - (void) setFillPath:(BOOL)a ;
 - (void) setFallbackContents:(id)a ;
 - (void) setStringKeycapOverImage:(BOOL)a ;
 - (id) displayString;


@end
