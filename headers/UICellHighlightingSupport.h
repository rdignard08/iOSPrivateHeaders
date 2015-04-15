
@interface UICellHighlightingSupport : NSObject {

    ^{__CFDictionary=} _unhighlightedStates;
    id _cell;
}

 - (void) dealloc;
 - (void) highlightView:(id)a;
 - (void) applyState:(unsigned long long)atoView:(id)b;
 - (void) cacheState:(unsigned long long)aforView:(id)b;
 - (id) initWithCell:(id)a;


@end
