
@interface UICellHighlightingSupport : NSObject {

    ^{__CFDictionary=} _unhighlightedStates;
    id _cell;
}

 - (void) dealloc;
 - (void) highlightView:(id)a;
 - (void) applyState:(Q)atoView:(id)b;
 - (void) cacheState:(Q)aforView:(id)b;
 - (id) initWithCell:(id)a;


@end
