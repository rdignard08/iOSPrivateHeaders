
@interface TIKeyboardBehaviorState : NSObject {

    BOOL hasInput;
    BOOL hasCandidates;
    BOOL hasCandidateSelected;
    BOOL hasNextPage;
    BOOL showsExtendedList;
    BOOL followsZhuyin;
    BOOL spaceConfirmation;
    BOOL _hasAutocorrection;
    BOOL _showsCandidatesInLayout;
}
@property (nonatomic, assign, readwrite) NSNumber* hasInput;
@property (nonatomic, assign, readwrite) NSNumber* hasAutocorrection;
@property (nonatomic, assign, readwrite) NSNumber* hasCandidates;
@property (nonatomic, assign, readwrite) NSNumber* hasCandidateSelected;
@property (nonatomic, assign, readwrite) NSNumber* hasNextPage;
@property (nonatomic, assign, readwrite) NSNumber* showsExtendedList;
@property (nonatomic, assign, readwrite) NSNumber* followsZhuyin;
@property (nonatomic, assign, readwrite) NSNumber* spaceConfirmation;
@property (nonatomic, assign, readwrite) NSNumber* showsCandidatesInLayout;

 - (BOOL) hasNextPage;
 - (void) setHasInput:(BOOL)a;
 - (void) setHasAutocorrection:(BOOL)a;
 - (void) setHasCandidates:(BOOL)a;
 - (void) setHasCandidateSelected:(BOOL)a;
 - (void) setHasNextPage:(BOOL)a;
 - (void) setShowsExtendedList:(BOOL)a;
 - (void) setShowsCandidatesInLayout:(BOOL)a;
 - (void) setFollowsZhuyin:(BOOL)a;
 - (void) setSpaceConfirmation:(BOOL)a;
 - (BOOL) hasInput;
 - (BOOL) hasCandidates;
 - (BOOL) hasCandidateSelected;
 - (BOOL) showsExtendedList;
 - (BOOL) followsZhuyin;
 - (BOOL) spaceConfirmation;
 - (BOOL) hasAutocorrection;
 - (BOOL) showsCandidatesInLayout;


@end
