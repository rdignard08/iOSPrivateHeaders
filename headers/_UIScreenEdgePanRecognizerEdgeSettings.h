
@interface _UIScreenEdgePanRecognizerEdgeSettings : _UISettings {

    d _hysteresis;
    d _edgeRegionSize;
    d _bottomEdgeRegionSize;
    d _backProjectionTime;
    d _edgeAngleWindow;
    d _edgeAngleWindowDecayTime;
    d _restrictedEdgeRegionTimeInterval;
    d _restrictedEdgeRegionMinimumWeight;
    d _maximumSwipeDuration;
}
 + (id) settingsControllerModule;
 + (id) keyPathsForValuesAffectingEdgeAngleWindowDegreees;

 - (void) setDefaultValues;
 - (void) setHysteresis:(d)a;
 - (void) setEdgeRegionSize:(d)a;
 - (void) setBottomEdgeRegionSize:(d)a;
 - (void) setBackProjectionTime:(d)a;
 - (void) setEdgeAngleWindow:(d)a;
 - (void) setEdgeAngleWindowDecayTime:(d)a;
 - (void) setRestrictedEdgeRegionTimeInterval:(d)a;
 - (void) setRestrictedEdgeRegionMinimumWeight:(d)a;
 - (void) setMaximumSwipeDuration:(d)a;
 - (d) edgeAngleWindow;
 - (d) edgeAngleWindowDegreees;
 - (void) setEdgeAngleWindowDegreees:(d)a;
 - (d) hysteresis;
 - (d) edgeRegionSize;
 - (d) bottomEdgeRegionSize;
 - (d) backProjectionTime;
 - (d) edgeAngleWindowDecayTime;
 - (d) restrictedEdgeRegionTimeInterval;
 - (d) restrictedEdgeRegionMinimumWeight;
 - (d) maximumSwipeDuration;


@end
