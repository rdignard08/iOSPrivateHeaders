
@protocol NSCopying, NSSecureCoding;
@interface TIKeyboardCandidateResultSet : NSObject <NSCopying, NSSecureCoding> {

    BOOL _excludedExtensionCandidates;
    @"NSArray" _candidates;
    Q _initialSelectedIndex;
    @"TIKeyboardCandidate" _defaultCandidate;
    @"NSArray" _sortMethods;
    @"NSDictionary" _sortMethodGroups;
    @"NSDictionary" _indexTitles;
    @"NSDictionary" _showExtensionCandidates;
    @"NSArray" _initiallyHiddenCandidates;
    Q _generatedCandidateCount;
    Q _batchCandidateLocation;
    Q _selectedHiddenCandidateIndex;
    @"TIKeyboardIntermediateText" _uncommittedText;
    @"TIKeyboardCandidate" _acceptedCandidate;
}
@property (nonatomic, retain, readwrite) NSArray* candidates;
@property (nonatomic, assign, readwrite) NSNumber* initialSelectedIndex;
@property (nonatomic, copy, readwrite) TIKeyboardCandidate* defaultCandidate;
@property (nonatomic, retain, readwrite) NSArray* sortMethods;
@property (nonatomic, retain, readwrite) NSDictionary* sortMethodGroups;
@property (nonatomic, retain, readwrite) NSDictionary* indexTitles;
@property (nonatomic, retain, readwrite) NSDictionary* showExtensionCandidates;
@property (nonatomic, retain, readwrite) NSArray* initiallyHiddenCandidates;
@property (nonatomic, assign, readwrite) NSNumber* selectedHiddenCandidateIndex;
@property (nonatomic, assign, readonly) NSNumber* hasCandidates;
@property (nonatomic, assign, readonly) TIKeyboardCandidate* firstCandidate;
@property (nonatomic, assign, readonly) NSNumber* hasMetadata;
@property (nonatomic, assign, readwrite) NSNumber* excludedExtensionCandidates;
@property (nonatomic, assign, readwrite) NSNumber* generatedCandidateCount;
@property (nonatomic, assign, readwrite) NSNumber* batchCandidateLocation;
@property (nonatomic, assign, readonly) NSNumber* isDummySet;
@property (nonatomic, retain, readwrite) TIKeyboardIntermediateText* uncommittedText;
@property (nonatomic, retain, readwrite) TIKeyboardCandidate* acceptedCandidate;
 + (BOOL) supportsSecureCoding;
 + (id) setWithCandidates:(id)ainitialSelectedIndex:(Q)bdefaultCandidate:(id)csortMethods:(id)dsortMethodGroups:(id)eindexTitles:(id)fshowExtensionCandidates:(id)ginitiallyHiddenCandidates:(id)hselectedHiddenCandidateIndex:(Q)iexcludedExtensionCandidates:(BOOL)j;
 + (id) setWithCandidates:(id)a;
 + (id) dummySet;

 - (BOOL) candidatesForSortIndexShowAlternativeText:(q)a;
 - (id) candidateGroupsForSortIndex:(q)a;
 - (id) copyWithZone:(^{_NSZone=})a;
 - (void) dealloc;
 - (BOOL) isEqual:(id)a;
 - (BOOL) isDummySet;
 - (BOOL) hasMetadata;
 - (id) uncommittedText;
 - (id) setByAppendingSet:(id)a;
 - (Q) positionInCandidateList:(id)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (BOOL) hasCandidates;
 - (void) setCandidates:(id)a;
 - (void) setUncommittedText:(id)a;
 - (void) setAcceptedCandidate:(id)a;
 - (Q) initialSelectedIndex;
 - (void) setInitialSelectedIndex:(Q)a;
 - (id) defaultCandidate;
 - (id) sortMethods;
 - (void) setSortMethods:(id)a;
 - (id) indexTitles;
 - (void) setIndexTitles:(id)a;
 - (id) showExtensionCandidates;
 - (void) setShowExtensionCandidates:(id)a;
 - (id) initiallyHiddenCandidates;
 - (void) setInitiallyHiddenCandidates:(id)a;
 - (Q) selectedHiddenCandidateIndex;
 - (void) setSelectedHiddenCandidateIndex:(Q)a;
 - (id) sortMethodGroups;
 - (void) setSortMethodGroups:(id)a;
 - (id) initWithCandidates:(id)ainitialSelectedIndex:(Q)bdefaultCandidate:(id)csortMethods:(id)dsortMethodGroups:(id)eindexTitles:(id)fshowExtensionCandidates:(id)ginitiallyHiddenCandidates:(id)hselectedHiddenCandidateIndex:(Q)iexcludedExtensionCandidates:(BOOL)j;
 - (Q) batchCandidateLocation;
 - (Q) generatedCandidateCount;
 - (BOOL) excludedExtensionCandidates;
 - (void) setGeneratedCandidateCount:(Q)a;
 - (void) setBatchCandidateLocation:(Q)a;
 - (id) firstCandidate;
 - (BOOL) isSubsetOf:(id)a;
 - (void) setDefaultCandidate:(id)a;
 - (void) setExcludedExtensionCandidates:(BOOL)a;
 - (id) acceptedCandidate;
 - (id) candidates;


@end
