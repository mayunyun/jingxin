//
//  XiaoShouFaHuoACell.h
//  YiRuanTong
//
//  Created by 钱龙 on 2018/5/5.
//  Copyright © 2018年 联祥. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChanPinFaHuoModel.h"
@interface XiaoShouFaHuoACell : UITableViewCell
@property(nonatomic,strong)ChanPinFaHuoModel * model;
@property (weak, nonatomic) IBOutlet UILabel *prono;
@property (weak, nonatomic) IBOutlet UILabel *proname;
@property (weak, nonatomic) IBOutlet UILabel *proguige;
@property (weak, nonatomic) IBOutlet UILabel *totalCount;
@property (weak, nonatomic) IBOutlet UILabel *totalmoney;
@property (weak, nonatomic) IBOutlet UILabel *proPrice;
@property (weak, nonatomic) IBOutlet UILabel *proDanwei;
@property (weak, nonatomic) IBOutlet UILabel *xiaoshoupeople;

@end
