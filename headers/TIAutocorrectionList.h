
@protocol NSSecureCoding;
@interface TIAutocorrectionList : NSObject <NSSecureCoding> {

    TIKeyboardCandidate _autocorrection;
    NSArray _predictions;
}
@property (nonatomic, assign, readonly) TIKeyboardCandidate* autocorrection;
@property (nonatomic, assign, readonly) NSArray* predictions;
@property (nonatomic, assign, readonly) NSArray* candidates;
@property (nonatomic, assign, readonly) NSNumber* shouldAcceptTopCandidate;
 + (BOOL) supportsSecureCoding;
 + (id) listWithAutocorrection:(id)apredictions:(id)b;
 + (id) autocorrectionListWithCandidates:(id)ashouldAcceptTopCandidate:(BOOL)b;

 - (void) dealloc;
 - (BOOL) shouldAcceptTopCandidate;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithAutocorrection:(id)apredictions:(id)b;
 - (id) initWithCandidates:(id)ashouldAcceptTopCandidate:(BOOL)b;
 - (id) autocorrection;
 - (id) predictions;
 - (id) initWithCandidates:(id)a;
 - (id) candidates;


@end
