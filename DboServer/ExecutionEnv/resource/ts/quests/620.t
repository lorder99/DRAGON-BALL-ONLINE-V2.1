CNtlTSTrigger
{
	sm = 1;
	sq = 1;
	qc = 3;
	rq = 0;
	tid = 620;
	title = 62002;

	CNtlTSGroup
	{
		gid = 0;

		CDboTSContGAct
		{
			cid = 2;
			elnk = 252;
			nextlnk = 100;
			prelnk = "1;";

			CDboTSActRegQInfo
			{
				cont = 62008;
				gtype = 1;
				area = 62001;
				goal = 62004;
				grade = 132203;
				rwd = 100;
				scitem = -1;
				sort = 62005;
				stype = 2;
				taid = 1;
				title = 62002;
			}
			CDboTSActNPCConv
			{
				conv = 62009;
				ctype = 1;
				idx = 4751107;
				taid = 2;
			}
		}
		CDboTSContEnd
		{
			cid = 254;
			prelnk = "100;";
			type = 1;
		}
		CDboTSContGAct
		{
			cid = 252;
			elnk = 255;
			nextlnk = 253;
			prelnk = "2;";
		}
		CDboTSContReward
		{
			canclnk = 255;
			cid = 100;
			rwdzeny = 0;
			desc = 62014;
			nextlnk = 254;
			rwdexp = 0;
			rwdtbl = 62001;
			rwdtype = 0;
			ltime = -1;
			prelnk = "2;";
			usetbl = 1;

			CDboTSClickNPC
			{
				npcidx = "4752105;";
			}
		}
		CDboTSContStart
		{
			cid = 0;
			stdiag = 62007;
			nolnk = 253;
			rm = 0;
			yeslnk = 1;

			CDboTSCheckPCRace
			{
				raceflg = 2;
			}
			CDboTSCheckLvl
			{
				maxlvl = 100;
				minlvl = 21;
			}
			CDboTSClickNPC
			{
				npcidx = "4751107;";
			}
			CDboTSCheckClrQst
			{
				and = "619;";
				flink = 1;
				flinknextqid = "662;";
				not = 0;
			}
		}
		CDboTSContEnd
		{
			cid = 253;
			prelnk = "0;1;252;";
			type = 0;
		}
		CDboTSContProposal
		{
			cancellnk = 253;
			cid = 1;
			cont = 62008;
			gtype = 1;
			oklnk = 2;
			area = 62001;
			goal = 62004;
			sort = 62005;
			prelnk = "0;";
			ds = 1;
			grade = 132203;
			rwd = 100;
			title = 62002;
		}
	}
}

