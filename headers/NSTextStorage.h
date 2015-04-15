
@interface NSTextStorage : NSMutableAttributedString {

    {_NSRange="location"Q"length"Q} _editedRange;
    q _editedDelta;
    {?="editedMask"b8"postWillProcess"b1"postDidProcess"b1""b6"disabled"b16} _flags;
    @"NSMutableArray" _layoutManagers;
    id _sideData;
    q _changeInLength;
}
 + (id) allocWithZone:(^{_NSZone=})a;

 - (void) _undoRedoTextOperation:(id)a;
 - (id) _undoRedoAttributedSubstringFromRange:({_NSRange=QQ})a;
 - (Class) classForCoder;
 - (void) edited:(Q)arange:({_NSRange=QQ})bchangeInLength:(q)c;
 - (void) dealloc;
 - (void) finalize;
 - (void) beginEditing;
 - (void) endEditing;
 - (void) setDelegate:(id)a;
 - (void) coordinateAccess:(@?)a;
 - (void) coordinateEditing:(@?)a;
 - (void) coordinateReading:(@?)a;
 - (id) init;
 - (void) encodeWithCoder:(id)a;
 - (id) initWithCoder:(id)a;
 - (id) delegate;
 - (id) cuiCatalog;
 - (id) cuiStyleEffects;
 - (BOOL) _usesSimpleTextEffects;
 - (BOOL) _isEditing;
 - (BOOL) _lockForReading;
 - (void) _unlock;
 - (void) _setForceFixAttributes:(BOOL)a;
 - (void) _setUsesSimpleTextEffects:(BOOL)a;
 - (void) addLayoutManager:(id)a;
 - (id) layoutManagers;
 - (void) removeLayoutManager:(id)a;
 - (BOOL) _lockForWriting;
 - (BOOL) _attributeFixingInProgress;
 - (void) _setAttributeFixingInProgress:(BOOL)a;
 - (BOOL) _shouldSetOriginalFontAttribute;
 - ({_NSRange=QQ}) editedRange;
 - (void) invalidateAttributesInRange:({_NSRange=QQ})a;
 - (Q) editedMask;
 - (q) changeInLength;
 - (void) _notifyEdited:(Q)arange:({_NSRange=QQ})bchangeInLength:(q)cinvalidatedRange:({_NSRange=QQ})d;
 - (void) fontSetChanged;
 - (void) processEditing;
 - (BOOL) _lockForWritingWithExceptionHandler:(BOOL)a;
 - (BOOL) fixesAttributesLazily;
 - ({_NSRange=QQ}) _rangeByEstimatingAttributeFixingForRange:({_NSRange=QQ})a;
 - (BOOL) _forceFixAttributes;
 - (void) setEditedMask:(Q)a;
 - (void) ensureAttributesAreFixedInRange:({_NSRange=QQ})a;
 - (void) setEditedRange:({_NSRange=QQ})a;
 - (void) setChangeInLength:(q)a;


@end
