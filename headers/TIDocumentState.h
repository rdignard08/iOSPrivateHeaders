
@protocol NSSecureCoding;
@interface TIDocumentState : NSObject <NSSecureCoding> {

    @"NSString" _contextBeforeInput;
    @"NSString" _markedText;
    @"NSString" _selectedText;
    @"NSString" _contextAfterInput;
    {_NSRange="location"Q"length"Q} _selectedRangeInMarkedText;
}
@property (nonatomic, assign, readonly) NSString* contextBeforeInput;
@property (nonatomic, assign, readonly) NSString* markedText;
@property (nonatomic, assign, readonly) NSString* selectedText;
@property (nonatomic, assign, readonly) NSString* contextAfterInput;
@property (nonatomic, assign, readonly) NSNumber* selectedRangeInMarkedText;
 + (id) documentStateOfSecureTextDocument:(id)a;
 + (id) documentStateOfDocument:(id)a;
 + (BOOL) supportsSecureCoding;
 + (id) documentStateWithContextBefore:(id)aselectedText:(id)bcontextAfter:(id)c;
 + (id) documentStateWithContextBefore:(id)aselectedText:(id)bcontextAfter:(id)c;
 + (id) documentStateWithContextBefore:(id)amarkedText:(id)bselectedRange:({_NSRange=QQ})ccontextAfter:(id)d;
 + (id) documentStateWithText:(id)aselectedRange:({_NSRange=QQ})b;

 - (id) initWithDocument:(id)a;
 - (id) initWithSecureTextDocument:(id)a;
 - (id) _positionFromPosition:(id)atoPreviousWordBoundaryInDocument:(id)btokenAccumulator:(@?)c;
 - (id) _contextBeforePosition:(id)ainDocument:(id)b;
 - (id) _contextAfterPosition:(id)ainDocument:(id)b;
 - (id) textRangeFromPosition:(id)atoPosition:(id)binDocument:(id)c;
 - (id) copyTextInRange:(id)afromDocument:(id)b;
 - (id) _positionFromPosition:(id)atoPreviousWordStartInDocument:(id)btokenAccumulator:(@?)c;
 - (id) description;
 - (void) dealloc;
 - (unsigned long long) hash;
 - (BOOL) isEqual:(id)a;
 - (id) documentStateAfterSettingMarkedText:(id)aselectedRange:({_NSRange=QQ})b;
 - (id) documentStateAfterInsertingText:(id)a;
 - (id) documentStateAfterInsertingTextAfterSelection:(id)a;
 - (id) documentStateAfterReplacingText:(id)awithText:(id)b;
 - (id) inputStringWithTerminatorPredicate:(@?)a;
 - (BOOL) documentIsEmpty;
 - (id) documentStateAfterCursorAdjustment:(long long)a;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) initWithContextBefore:(id)amarkedText:(id)bselectedText:(id)ccontextAfter:(id)dselectedRangeInMarkedText:({_NSRange=QQ})e;
 - (id) contextBeforeInput;
 - (BOOL) string:(id)amatchesString:(id)b;
 - (id) markedText;
 - (id) selectedText;
 - (id) contextAfterInput;
 - ({_NSRange=QQ}) selectedRangeInMarkedText;
 - (unsigned long long) hashString:(id)aintoHashValue:(unsigned long long)b;
 - (id) documentStateAfterUnmarkingText;
 - (id) documentStateAfterDeletingBackward;
 - (id) documentStateAfterDeletingForward;
 - (id) documentStateAfterCollapsingSelection;
 - (id) wordPrefixOfString:(id)awithTerminatorPredicate:(@?)breverse:(BOOL)c;
 - (id) inputStemWithTerminatorPredicate:(@?)a;
 - (unsigned long long) inputIndexWithTerminatorPredicate:(@?)a;
 - (id) initWithText:(id)aselectedRange:({_NSRange=QQ})b;


@end
