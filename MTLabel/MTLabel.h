//
//  MTLabel.h
//  CustomLabelTest
//
//  Copyright 2011 Michal Tuszynski
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.

#import <UIKit/UIKit.h>
@protocol MTLabelDelegate
- (void)labelDidChangeFrame:(CGRect)frame;
@end

typedef enum {
    
    MTLabelTextAlignmentLeft,
    MTLabelTextAlignmentCenter,
    MTLabelTextAlignmentRight,
    MTLabelTextAlignmentJustify
    
} MTLabelTextAlignment;


@interface MTLabel : UIView

@property (nonatomic, readwrite, setter = setNumberOfLines:, getter = numberOfLines) int _numberOfLines;
@property (nonatomic, readwrite, setter = setMaxNumberOfLines:, getter = numberOfLines) int _maxNumberOfLines;
@property (nonatomic, readwrite, setter = setLineHeight:, getter = lineHeight) CGFloat _lineHeight;
@property (nonatomic, readonly) CGFloat _textHeight;
@property (nonatomic, readwrite, setter = setMinimumFontSize:, getter = minimumFontSize) CGFloat _minimumFontSize;
@property (nonatomic, strong, setter = setText:, getter = text) NSString *_text;
@property (nonatomic, strong, setter = setTextColor:, getter = fontColor) UIColor *_textColor;
@property (nonatomic, strong, setter = setFontHighlightColor:, getter = fontHighlightColor) UIColor *_fontHighlightColor;
@property (nonatomic, strong, setter = setFont:, getter = font) UIFont *_font;
@property (nonatomic, readwrite, setter = setLimitToNumberOfLines:, getter = limitToNumberOfLines) BOOL _limitToNumberOfLines;
@property (nonatomic, readwrite, setter = setResizeToFitText:, getter = resizeToFitText) BOOL _shouldResizeToFit;
@property (nonatomic, readwrite, setter = setTextAlignment:, getter = textAlignment) MTLabelTextAlignment _textAlignment;
@property (unsafe_unretained, nonatomic) id<MTLabelDelegate> delegate;
@property (nonatomic, readwrite, setter = setAdjustSizeToFit:, getter = adjustSizeToFit) BOOL _adjustSizeToFit;

@property (nonatomic, assign, setter = setShadowOffset:, getter = shadowOffset) CGSize _shadowOffset;
@property (nonatomic, strong, setter = setShadowColor:, getter = shadowColor) UIColor *_shadowColor;
@property (nonatomic, strong, setter = setStrokeColor:, getter = strokeColor) UIColor *_strokeColor;

-(id)initWithFrame:(CGRect)frame andText:(NSString *)text;
-(id)initWithText:(NSString *)text;
+(id)label;
+(id)labelWithFrame:(CGRect)frame andText:(NSString *)text;
+(id)labelWithText:(NSString *)text;
-(void)setText:(NSString *)text;
-(void)setLineHeight:(CGFloat)lineHeight;
-(void)setNumberOfLines:(int)numberOfLines;
-(void)setFont:(UIFont *)font;
-(void)setFontColor:(UIColor *)fontColor;
-(void)setLimitToNumberOfLines:(BOOL)limitToNumberOfLines;
-(void)setTextAlignment:(MTLabelTextAlignment)textAlignment;
-(void)setResizeToFitText:(BOOL)resizeToFitText;
-(NSString *)text;
-(CGFloat)lineHeight;
-(UIColor *)fontColor;
-(UIFont *)font;
-(int)numberOfLines;
-(BOOL)limitToNumberOfLines;
-(BOOL)resizeToFitText;
-(MTLabelTextAlignment)textAlignment;


@end
