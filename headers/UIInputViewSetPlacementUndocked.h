
@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement {

    d _normalizedOffset;
    {UIEdgeInsets="top"d"left"d"bottom"d"right"d} _chromeBuffer;
}
 + (id) placementWithUndockedOffset:(d)achromeBuffer:({UIEdgeInsets=dddd})b;

 - (BOOL) isEqual:(id)a;
 - (BOOL) inputViewWillAppear;
 - (BOOL) isUndocked;
 - (id) verticalConstraintForInputViewSet:(id)ahostView:(id)bcontainerView:(id)c;
 - (void) setNormalizedOffset:(d)a;
 - (void) setChromeBuffer:({UIEdgeInsets=dddd})a;
 - ({UIEdgeInsets=dddd}) chromeBuffer;
 - (d) normalizedOffset;


@end
