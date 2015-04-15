
@interface UIWKAutocorrectionContext : NSObject {

    NSString* _contextBeforeSelection;
    NSString* _selectedText;
    NSString* _contextAfterSelection;
    NSString* _markedText;
    {_NSRange="location"Q"length"Q} _rangeInMarkedText;
}
@property (nonatomic, copy, readwrite) NSString* contextBeforeSelection;
@property (nonatomic, copy, readwrite) NSString* selectedText;
@property (nonatomic, copy, readwrite) NSString* contextAfterSelection;
@property (nonatomic, copy, readwrite) NSString* markedText;
@property (nonatomic, assign, readwrite) NSNumber* rangeInMarkedText;

 - (void) dealloc;
 - (id) contextBeforeSelection;
 - (id) contextAfterSelection;
 - ({_NSRange=QQ}) rangeInMarkedText;
 - (void) setSelectedText:(id)a ;
 - (void) setContextBeforeSelection:(id)a ;
 - (void) setContextAfterSelection:(id)a ;
 - (void) setMarkedText:(id)a ;
 - (void) setRangeInMarkedText:({_NSRange=QQ})a ;
 - (id) markedText;
 - (id) selectedText;


@end
