
@interface UIKeyboardAutocorrectionController : NSObject {

    @"TIAutocorrectionList" _autocorrectionList;
    BOOL _needsAutocorrection;
    BOOL _deferredAutocorrection;
    BOOL _requestedAutocorrection;
}
@property (nonatomic, assign, readonly) TIKeyboardCandidate* autocorrection;
@property (nonatomic, retain, readwrite) TIAutocorrectionList* autocorrectionList;
@property (nonatomic, assign, readwrite) NSNumber* needsAutocorrection;
@property (nonatomic, assign, readwrite) NSNumber* deferredAutocorrection;
@property (nonatomic, assign, readwrite) NSNumber* requestedAutocorrection;

 - (void) dealloc;
 - (void) clearAutocorrection;
 - (void) updateSuggestionViews;
 - (void) setAutocorrectionList:(id)a;
 - (void) setNeedsAutocorrection;
 - (id) autocorrectionList;
 - (BOOL) needsAutocorrection;
 - (BOOL) requestedAutocorrection;
 - (void) requestAutocorrectionWithExecutionContext:(id)a;
 - (void) setNeedsAutocorrection:(BOOL)a;
 - (BOOL) deferredAutocorrection;
 - (void) setDeferredAutocorrection:(BOOL)a;
 - (void) setRequestedAutocorrection:(BOOL)a;
 - (id) autocorrection;
 - (BOOL) hasAutocorrection;


@end
