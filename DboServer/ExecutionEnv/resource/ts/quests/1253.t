CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 5;
	rq = 0;
	tid = 1253;
	title = 125302;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 101;
			elnk = 255;
			nextlnk = 254;
			prelnk = "100;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iidx1 = 310;
				iprob0 = "1.000000";
				icnt1 = 255;
				iidx0 = 108;
				iprob1 = "1.000000";
				taid = 2;
				type = 1;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 0;
				eitype = 2;
				idx0 = -1;
				cnt0 = 0;
				cnt2 = 0;
				ectype = -1;
				etype = 1;
				idx1 = -1;
				taid = 1;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActNPCConv
			{
				conv = 125309;
				ctype = 1;
				idx = 1111103;
				taid = 2;
			}
			CDboTSActRegQInfo
			{
				cont = 125308;
				gtype = 1;
				area = 125301;
				goal = 125304;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 125305;
				stype = 1;
				taid = 1;
				title = 125302;
			}
			CDboTSActSToCEvt
			{
				apptype = 0;
				cnt1 = 1;
				eitype = 2;
				idx0 = 108;
				cnt0 = 1;
				cnt2 = 0;
				ectype = -1;
				etype = 0;
				idx1 = 310;
				taid = 3;
				esctype = 0;
				idx2 = -1;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "101;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 125308;
			gtype = 1;
			oklnk = 2;
			area = 125301;
			goal = 125304;
			sort = 125305;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 125302;
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 125314;
			nextlnk = 101;
			rwdexp = 0;
			rwdtbl = 125301;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSCheckQItem
			{
				ct = 0;
				icnt = 1;
				iidx = 108;
			}
			CDboTSCheckQItem
			{
				ct = 0;
				icnt = 1;
				iidx = 310;
			}
			CDboTSClickNPC
			{
				npcidx = "7132101;";
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 125307;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 42;
			}
			CDboTSClickNPC
			{
				npcidx = "1111103;";
			}
			CDboTSCheckClrQst
			{
				and = "1252;";
				flink = 1;
				flinknextqid = "1254;";
				not = 0;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
	}
	CNtlTSGroup
	{
		gid = 254;

		CDboTSContGAct
		{
			cid = 1;
			elnk = 255;
			nextlnk = 254;
			prelnk = "0;";

			CDboTSActQItem
			{
				icnt0 = 255;
				iidx1 = 310;
				iprob0 = "1.000000";
				icnt1 = 255;
				iidx0 = 108;
				iprob1 = "1.000000";
				taid = 1;
				type = 1;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "1;";
			type = 0;
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 125307;
			nolnk = 255;
			rm = 0;
			yeslnk = 1;
		}
	}
}

